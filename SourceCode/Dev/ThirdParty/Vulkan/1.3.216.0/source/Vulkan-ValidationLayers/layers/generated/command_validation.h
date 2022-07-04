// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See command_validation_generator.py for modifications


/***************************************************************************
 *
 * Copyright (c) 2021 The Khronos Group Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Spencer Fricke <s.fricke@samsung.com>
 *
 ****************************************************************************/

#pragma once
#include <array>

// Used as key for maps of all vkCmd* calls
// Does not include vkBeginCommandBuffer/vkEndCommandBuffer
typedef enum CMD_TYPE {
    CMD_NONE = 0,
    CMD_BEGINCONDITIONALRENDERINGEXT = 1,
    CMD_BEGINDEBUGUTILSLABELEXT = 2,
    CMD_BEGINQUERY = 3,
    CMD_BEGINQUERYINDEXEDEXT = 4,
    CMD_BEGINRENDERPASS = 5,
    CMD_BEGINRENDERPASS2 = 6,
    CMD_BEGINRENDERPASS2KHR = 7,
    CMD_BEGINRENDERING = 8,
    CMD_BEGINRENDERINGKHR = 9,
    CMD_BEGINTRANSFORMFEEDBACKEXT = 10,
    CMD_BEGINVIDEOCODINGKHR = 11,
    CMD_BINDDESCRIPTORSETS = 12,
    CMD_BINDINDEXBUFFER = 13,
    CMD_BINDINVOCATIONMASKHUAWEI = 14,
    CMD_BINDPIPELINE = 15,
    CMD_BINDPIPELINESHADERGROUPNV = 16,
    CMD_BINDSHADINGRATEIMAGENV = 17,
    CMD_BINDTRANSFORMFEEDBACKBUFFERSEXT = 18,
    CMD_BINDVERTEXBUFFERS = 19,
    CMD_BINDVERTEXBUFFERS2 = 20,
    CMD_BINDVERTEXBUFFERS2EXT = 21,
    CMD_BLITIMAGE = 22,
    CMD_BLITIMAGE2 = 23,
    CMD_BLITIMAGE2KHR = 24,
    CMD_BUILDACCELERATIONSTRUCTURENV = 25,
    CMD_BUILDACCELERATIONSTRUCTURESINDIRECTKHR = 26,
    CMD_BUILDACCELERATIONSTRUCTURESKHR = 27,
    CMD_CLEARATTACHMENTS = 28,
    CMD_CLEARCOLORIMAGE = 29,
    CMD_CLEARDEPTHSTENCILIMAGE = 30,
    CMD_CONTROLVIDEOCODINGKHR = 31,
    CMD_COPYACCELERATIONSTRUCTUREKHR = 32,
    CMD_COPYACCELERATIONSTRUCTURENV = 33,
    CMD_COPYACCELERATIONSTRUCTURETOMEMORYKHR = 34,
    CMD_COPYBUFFER = 35,
    CMD_COPYBUFFER2 = 36,
    CMD_COPYBUFFER2KHR = 37,
    CMD_COPYBUFFERTOIMAGE = 38,
    CMD_COPYBUFFERTOIMAGE2 = 39,
    CMD_COPYBUFFERTOIMAGE2KHR = 40,
    CMD_COPYIMAGE = 41,
    CMD_COPYIMAGE2 = 42,
    CMD_COPYIMAGE2KHR = 43,
    CMD_COPYIMAGETOBUFFER = 44,
    CMD_COPYIMAGETOBUFFER2 = 45,
    CMD_COPYIMAGETOBUFFER2KHR = 46,
    CMD_COPYMEMORYTOACCELERATIONSTRUCTUREKHR = 47,
    CMD_COPYQUERYPOOLRESULTS = 48,
    CMD_CULAUNCHKERNELNVX = 49,
    CMD_DEBUGMARKERBEGINEXT = 50,
    CMD_DEBUGMARKERENDEXT = 51,
    CMD_DEBUGMARKERINSERTEXT = 52,
    CMD_DECODEVIDEOKHR = 53,
    CMD_DISPATCH = 54,
    CMD_DISPATCHBASE = 55,
    CMD_DISPATCHBASEKHR = 56,
    CMD_DISPATCHINDIRECT = 57,
    CMD_DRAW = 58,
    CMD_DRAWINDEXED = 59,
    CMD_DRAWINDEXEDINDIRECT = 60,
    CMD_DRAWINDEXEDINDIRECTCOUNT = 61,
    CMD_DRAWINDEXEDINDIRECTCOUNTAMD = 62,
    CMD_DRAWINDEXEDINDIRECTCOUNTKHR = 63,
    CMD_DRAWINDIRECT = 64,
    CMD_DRAWINDIRECTBYTECOUNTEXT = 65,
    CMD_DRAWINDIRECTCOUNT = 66,
    CMD_DRAWINDIRECTCOUNTAMD = 67,
    CMD_DRAWINDIRECTCOUNTKHR = 68,
    CMD_DRAWMESHTASKSINDIRECTCOUNTNV = 69,
    CMD_DRAWMESHTASKSINDIRECTNV = 70,
    CMD_DRAWMESHTASKSNV = 71,
    CMD_DRAWMULTIEXT = 72,
    CMD_DRAWMULTIINDEXEDEXT = 73,
    CMD_ENCODEVIDEOKHR = 74,
    CMD_ENDCONDITIONALRENDERINGEXT = 75,
    CMD_ENDDEBUGUTILSLABELEXT = 76,
    CMD_ENDQUERY = 77,
    CMD_ENDQUERYINDEXEDEXT = 78,
    CMD_ENDRENDERPASS = 79,
    CMD_ENDRENDERPASS2 = 80,
    CMD_ENDRENDERPASS2KHR = 81,
    CMD_ENDRENDERING = 82,
    CMD_ENDRENDERINGKHR = 83,
    CMD_ENDTRANSFORMFEEDBACKEXT = 84,
    CMD_ENDVIDEOCODINGKHR = 85,
    CMD_EXECUTECOMMANDS = 86,
    CMD_EXECUTEGENERATEDCOMMANDSNV = 87,
    CMD_FILLBUFFER = 88,
    CMD_INSERTDEBUGUTILSLABELEXT = 89,
    CMD_NEXTSUBPASS = 90,
    CMD_NEXTSUBPASS2 = 91,
    CMD_NEXTSUBPASS2KHR = 92,
    CMD_PIPELINEBARRIER = 93,
    CMD_PIPELINEBARRIER2 = 94,
    CMD_PIPELINEBARRIER2KHR = 95,
    CMD_PREPROCESSGENERATEDCOMMANDSNV = 96,
    CMD_PUSHCONSTANTS = 97,
    CMD_PUSHDESCRIPTORSETKHR = 98,
    CMD_PUSHDESCRIPTORSETWITHTEMPLATEKHR = 99,
    CMD_RESETEVENT = 100,
    CMD_RESETEVENT2 = 101,
    CMD_RESETEVENT2KHR = 102,
    CMD_RESETQUERYPOOL = 103,
    CMD_RESOLVEIMAGE = 104,
    CMD_RESOLVEIMAGE2 = 105,
    CMD_RESOLVEIMAGE2KHR = 106,
    CMD_SETBLENDCONSTANTS = 107,
    CMD_SETCHECKPOINTNV = 108,
    CMD_SETCOARSESAMPLEORDERNV = 109,
    CMD_SETCOLORWRITEENABLEEXT = 110,
    CMD_SETCULLMODE = 111,
    CMD_SETCULLMODEEXT = 112,
    CMD_SETDEPTHBIAS = 113,
    CMD_SETDEPTHBIASENABLE = 114,
    CMD_SETDEPTHBIASENABLEEXT = 115,
    CMD_SETDEPTHBOUNDS = 116,
    CMD_SETDEPTHBOUNDSTESTENABLE = 117,
    CMD_SETDEPTHBOUNDSTESTENABLEEXT = 118,
    CMD_SETDEPTHCOMPAREOP = 119,
    CMD_SETDEPTHCOMPAREOPEXT = 120,
    CMD_SETDEPTHTESTENABLE = 121,
    CMD_SETDEPTHTESTENABLEEXT = 122,
    CMD_SETDEPTHWRITEENABLE = 123,
    CMD_SETDEPTHWRITEENABLEEXT = 124,
    CMD_SETDEVICEMASK = 125,
    CMD_SETDEVICEMASKKHR = 126,
    CMD_SETDISCARDRECTANGLEEXT = 127,
    CMD_SETEVENT = 128,
    CMD_SETEVENT2 = 129,
    CMD_SETEVENT2KHR = 130,
    CMD_SETEXCLUSIVESCISSORNV = 131,
    CMD_SETFRAGMENTSHADINGRATEENUMNV = 132,
    CMD_SETFRAGMENTSHADINGRATEKHR = 133,
    CMD_SETFRONTFACE = 134,
    CMD_SETFRONTFACEEXT = 135,
    CMD_SETLINESTIPPLEEXT = 136,
    CMD_SETLINEWIDTH = 137,
    CMD_SETLOGICOPEXT = 138,
    CMD_SETPATCHCONTROLPOINTSEXT = 139,
    CMD_SETPERFORMANCEMARKERINTEL = 140,
    CMD_SETPERFORMANCEOVERRIDEINTEL = 141,
    CMD_SETPERFORMANCESTREAMMARKERINTEL = 142,
    CMD_SETPRIMITIVERESTARTENABLE = 143,
    CMD_SETPRIMITIVERESTARTENABLEEXT = 144,
    CMD_SETPRIMITIVETOPOLOGY = 145,
    CMD_SETPRIMITIVETOPOLOGYEXT = 146,
    CMD_SETRASTERIZERDISCARDENABLE = 147,
    CMD_SETRASTERIZERDISCARDENABLEEXT = 148,
    CMD_SETRAYTRACINGPIPELINESTACKSIZEKHR = 149,
    CMD_SETSAMPLELOCATIONSEXT = 150,
    CMD_SETSCISSOR = 151,
    CMD_SETSCISSORWITHCOUNT = 152,
    CMD_SETSCISSORWITHCOUNTEXT = 153,
    CMD_SETSTENCILCOMPAREMASK = 154,
    CMD_SETSTENCILOP = 155,
    CMD_SETSTENCILOPEXT = 156,
    CMD_SETSTENCILREFERENCE = 157,
    CMD_SETSTENCILTESTENABLE = 158,
    CMD_SETSTENCILTESTENABLEEXT = 159,
    CMD_SETSTENCILWRITEMASK = 160,
    CMD_SETVERTEXINPUTEXT = 161,
    CMD_SETVIEWPORT = 162,
    CMD_SETVIEWPORTSHADINGRATEPALETTENV = 163,
    CMD_SETVIEWPORTWSCALINGNV = 164,
    CMD_SETVIEWPORTWITHCOUNT = 165,
    CMD_SETVIEWPORTWITHCOUNTEXT = 166,
    CMD_SUBPASSSHADINGHUAWEI = 167,
    CMD_TRACERAYSINDIRECT2KHR = 168,
    CMD_TRACERAYSINDIRECTKHR = 169,
    CMD_TRACERAYSKHR = 170,
    CMD_TRACERAYSNV = 171,
    CMD_UPDATEBUFFER = 172,
    CMD_WAITEVENTS = 173,
    CMD_WAITEVENTS2 = 174,
    CMD_WAITEVENTS2KHR = 175,
    CMD_WRITEACCELERATIONSTRUCTURESPROPERTIESKHR = 176,
    CMD_WRITEACCELERATIONSTRUCTURESPROPERTIESNV = 177,
    CMD_WRITEBUFFERMARKER2AMD = 178,
    CMD_WRITEBUFFERMARKERAMD = 179,
    CMD_WRITETIMESTAMP = 180,
    CMD_WRITETIMESTAMP2 = 181,
    CMD_WRITETIMESTAMP2KHR = 182,
    CMD_RANGE_SIZE = 183
} CMD_TYPE;

static const std::array<const char *, CMD_RANGE_SIZE> kGeneratedCommandNameList = {{
    "Command_Undefined",
    "vkCmdBeginConditionalRenderingEXT",
    "vkCmdBeginDebugUtilsLabelEXT",
    "vkCmdBeginQuery",
    "vkCmdBeginQueryIndexedEXT",
    "vkCmdBeginRenderPass",
    "vkCmdBeginRenderPass2",
    "vkCmdBeginRenderPass2KHR",
    "vkCmdBeginRendering",
    "vkCmdBeginRenderingKHR",
    "vkCmdBeginTransformFeedbackEXT",
    "vkCmdBeginVideoCodingKHR",
    "vkCmdBindDescriptorSets",
    "vkCmdBindIndexBuffer",
    "vkCmdBindInvocationMaskHUAWEI",
    "vkCmdBindPipeline",
    "vkCmdBindPipelineShaderGroupNV",
    "vkCmdBindShadingRateImageNV",
    "vkCmdBindTransformFeedbackBuffersEXT",
    "vkCmdBindVertexBuffers",
    "vkCmdBindVertexBuffers2",
    "vkCmdBindVertexBuffers2EXT",
    "vkCmdBlitImage",
    "vkCmdBlitImage2",
    "vkCmdBlitImage2KHR",
    "vkCmdBuildAccelerationStructureNV",
    "vkCmdBuildAccelerationStructuresIndirectKHR",
    "vkCmdBuildAccelerationStructuresKHR",
    "vkCmdClearAttachments",
    "vkCmdClearColorImage",
    "vkCmdClearDepthStencilImage",
    "vkCmdControlVideoCodingKHR",
    "vkCmdCopyAccelerationStructureKHR",
    "vkCmdCopyAccelerationStructureNV",
    "vkCmdCopyAccelerationStructureToMemoryKHR",
    "vkCmdCopyBuffer",
    "vkCmdCopyBuffer2",
    "vkCmdCopyBuffer2KHR",
    "vkCmdCopyBufferToImage",
    "vkCmdCopyBufferToImage2",
    "vkCmdCopyBufferToImage2KHR",
    "vkCmdCopyImage",
    "vkCmdCopyImage2",
    "vkCmdCopyImage2KHR",
    "vkCmdCopyImageToBuffer",
    "vkCmdCopyImageToBuffer2",
    "vkCmdCopyImageToBuffer2KHR",
    "vkCmdCopyMemoryToAccelerationStructureKHR",
    "vkCmdCopyQueryPoolResults",
    "vkCmdCuLaunchKernelNVX",
    "vkCmdDebugMarkerBeginEXT",
    "vkCmdDebugMarkerEndEXT",
    "vkCmdDebugMarkerInsertEXT",
    "vkCmdDecodeVideoKHR",
    "vkCmdDispatch",
    "vkCmdDispatchBase",
    "vkCmdDispatchBaseKHR",
    "vkCmdDispatchIndirect",
    "vkCmdDraw",
    "vkCmdDrawIndexed",
    "vkCmdDrawIndexedIndirect",
    "vkCmdDrawIndexedIndirectCount",
    "vkCmdDrawIndexedIndirectCountAMD",
    "vkCmdDrawIndexedIndirectCountKHR",
    "vkCmdDrawIndirect",
    "vkCmdDrawIndirectByteCountEXT",
    "vkCmdDrawIndirectCount",
    "vkCmdDrawIndirectCountAMD",
    "vkCmdDrawIndirectCountKHR",
    "vkCmdDrawMeshTasksIndirectCountNV",
    "vkCmdDrawMeshTasksIndirectNV",
    "vkCmdDrawMeshTasksNV",
    "vkCmdDrawMultiEXT",
    "vkCmdDrawMultiIndexedEXT",
    "vkCmdEncodeVideoKHR",
    "vkCmdEndConditionalRenderingEXT",
    "vkCmdEndDebugUtilsLabelEXT",
    "vkCmdEndQuery",
    "vkCmdEndQueryIndexedEXT",
    "vkCmdEndRenderPass",
    "vkCmdEndRenderPass2",
    "vkCmdEndRenderPass2KHR",
    "vkCmdEndRendering",
    "vkCmdEndRenderingKHR",
    "vkCmdEndTransformFeedbackEXT",
    "vkCmdEndVideoCodingKHR",
    "vkCmdExecuteCommands",
    "vkCmdExecuteGeneratedCommandsNV",
    "vkCmdFillBuffer",
    "vkCmdInsertDebugUtilsLabelEXT",
    "vkCmdNextSubpass",
    "vkCmdNextSubpass2",
    "vkCmdNextSubpass2KHR",
    "vkCmdPipelineBarrier",
    "vkCmdPipelineBarrier2",
    "vkCmdPipelineBarrier2KHR",
    "vkCmdPreprocessGeneratedCommandsNV",
    "vkCmdPushConstants",
    "vkCmdPushDescriptorSetKHR",
    "vkCmdPushDescriptorSetWithTemplateKHR",
    "vkCmdResetEvent",
    "vkCmdResetEvent2",
    "vkCmdResetEvent2KHR",
    "vkCmdResetQueryPool",
    "vkCmdResolveImage",
    "vkCmdResolveImage2",
    "vkCmdResolveImage2KHR",
    "vkCmdSetBlendConstants",
    "vkCmdSetCheckpointNV",
    "vkCmdSetCoarseSampleOrderNV",
    "vkCmdSetColorWriteEnableEXT",
    "vkCmdSetCullMode",
    "vkCmdSetCullModeEXT",
    "vkCmdSetDepthBias",
    "vkCmdSetDepthBiasEnable",
    "vkCmdSetDepthBiasEnableEXT",
    "vkCmdSetDepthBounds",
    "vkCmdSetDepthBoundsTestEnable",
    "vkCmdSetDepthBoundsTestEnableEXT",
    "vkCmdSetDepthCompareOp",
    "vkCmdSetDepthCompareOpEXT",
    "vkCmdSetDepthTestEnable",
    "vkCmdSetDepthTestEnableEXT",
    "vkCmdSetDepthWriteEnable",
    "vkCmdSetDepthWriteEnableEXT",
    "vkCmdSetDeviceMask",
    "vkCmdSetDeviceMaskKHR",
    "vkCmdSetDiscardRectangleEXT",
    "vkCmdSetEvent",
    "vkCmdSetEvent2",
    "vkCmdSetEvent2KHR",
    "vkCmdSetExclusiveScissorNV",
    "vkCmdSetFragmentShadingRateEnumNV",
    "vkCmdSetFragmentShadingRateKHR",
    "vkCmdSetFrontFace",
    "vkCmdSetFrontFaceEXT",
    "vkCmdSetLineStippleEXT",
    "vkCmdSetLineWidth",
    "vkCmdSetLogicOpEXT",
    "vkCmdSetPatchControlPointsEXT",
    "vkCmdSetPerformanceMarkerINTEL",
    "vkCmdSetPerformanceOverrideINTEL",
    "vkCmdSetPerformanceStreamMarkerINTEL",
    "vkCmdSetPrimitiveRestartEnable",
    "vkCmdSetPrimitiveRestartEnableEXT",
    "vkCmdSetPrimitiveTopology",
    "vkCmdSetPrimitiveTopologyEXT",
    "vkCmdSetRasterizerDiscardEnable",
    "vkCmdSetRasterizerDiscardEnableEXT",
    "vkCmdSetRayTracingPipelineStackSizeKHR",
    "vkCmdSetSampleLocationsEXT",
    "vkCmdSetScissor",
    "vkCmdSetScissorWithCount",
    "vkCmdSetScissorWithCountEXT",
    "vkCmdSetStencilCompareMask",
    "vkCmdSetStencilOp",
    "vkCmdSetStencilOpEXT",
    "vkCmdSetStencilReference",
    "vkCmdSetStencilTestEnable",
    "vkCmdSetStencilTestEnableEXT",
    "vkCmdSetStencilWriteMask",
    "vkCmdSetVertexInputEXT",
    "vkCmdSetViewport",
    "vkCmdSetViewportShadingRatePaletteNV",
    "vkCmdSetViewportWScalingNV",
    "vkCmdSetViewportWithCount",
    "vkCmdSetViewportWithCountEXT",
    "vkCmdSubpassShadingHUAWEI",
    "vkCmdTraceRaysIndirect2KHR",
    "vkCmdTraceRaysIndirectKHR",
    "vkCmdTraceRaysKHR",
    "vkCmdTraceRaysNV",
    "vkCmdUpdateBuffer",
    "vkCmdWaitEvents",
    "vkCmdWaitEvents2",
    "vkCmdWaitEvents2KHR",
    "vkCmdWriteAccelerationStructuresPropertiesKHR",
    "vkCmdWriteAccelerationStructuresPropertiesNV",
    "vkCmdWriteBufferMarker2AMD",
    "vkCmdWriteBufferMarkerAMD",
    "vkCmdWriteTimestamp",
    "vkCmdWriteTimestamp2",
    "vkCmdWriteTimestamp2KHR",
}};
