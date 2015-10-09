/**
 * @file      rasterize.h
 * @brief     CUDA-accelerated rasterization pipeline.
 * @authors   Skeleton code: Yining Karl Li, Kai Ninomiya
 * @date      2012-2015
 * @copyright University of Pennsylvania & STUDENT
 */

#pragma once

#include <glm/glm.hpp>

void rasterizeInit(int width, int height);
void rasterizeSetBuffers(
        int bufIdxSize, int *bufIdx,
		int bufTexSize, float * bufTex, int vertCount, float *bufPos, float *bufNor, float *bufCol);
void rasterize(uchar4 *pbo,glm::mat4 viewMat,glm::mat4 projMat);
void rasterizeFree();
