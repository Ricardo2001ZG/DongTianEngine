###############################################################################
# Copyright (c) 2018-2021 LunarG, Inc.
# Copyright (c) 2019-2020 Advanced Micro Devices, Inc.
# All rights reserved
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to
# deal in the Software without restriction, including without limitation the
# rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
# sell copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
# IN THE SOFTWARE.
#
# Author: LunarG Team
# Author: AMD Developer Tools Team
# Description: CMake script for framework util target
###############################################################################

add_library(gfxrecon_decode STATIC "")

target_sources(gfxrecon_decode
               PRIVATE
                    ${CMAKE_CURRENT_LIST_DIR}/annotation_handler.h
                    ${CMAKE_CURRENT_LIST_DIR}/api_decoder.h
                    ${CMAKE_CURRENT_LIST_DIR}/copy_shaders.h
                    ${CMAKE_CURRENT_LIST_DIR}/custom_vulkan_ascii_consumer.h
                    ${CMAKE_CURRENT_LIST_DIR}/custom_vulkan_ascii_consumer.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/custom_vulkan_struct_decoders.h
                    ${CMAKE_CURRENT_LIST_DIR}/custom_vulkan_struct_decoders.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/custom_vulkan_struct_decoders_forward.h
                    ${CMAKE_CURRENT_LIST_DIR}/custom_vulkan_struct_handle_mappers.h
                    ${CMAKE_CURRENT_LIST_DIR}/custom_vulkan_struct_handle_mappers.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/custom_vulkan_to_string.h
                    ${CMAKE_CURRENT_LIST_DIR}/custom_vulkan_to_string.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/descriptor_update_template_decoder.h
                    ${CMAKE_CURRENT_LIST_DIR}/descriptor_update_template_decoder.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/decode_allocator.h
                    ${CMAKE_CURRENT_LIST_DIR}/decode_allocator.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/file_processor.h
                    ${CMAKE_CURRENT_LIST_DIR}/file_processor.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/file_transformer.h
                    ${CMAKE_CURRENT_LIST_DIR}/file_transformer.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/handle_pointer_decoder.h
                    ${CMAKE_CURRENT_LIST_DIR}/pnext_node.h
                    ${CMAKE_CURRENT_LIST_DIR}/pnext_typed_node.h
                    ${CMAKE_CURRENT_LIST_DIR}/pointer_decoder_base.h
                    ${CMAKE_CURRENT_LIST_DIR}/pointer_decoder.h
                    ${CMAKE_CURRENT_LIST_DIR}/portability.h
                    ${CMAKE_CURRENT_LIST_DIR}/portability.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/referenced_resource_table.h
                    ${CMAKE_CURRENT_LIST_DIR}/referenced_resource_table.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/replay_options.h
                    ${CMAKE_CURRENT_LIST_DIR}/resource_util.h
                    ${CMAKE_CURRENT_LIST_DIR}/resource_util.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/screenshot_handler.h
                    ${CMAKE_CURRENT_LIST_DIR}/screenshot_handler.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/string_array_decoder.h
                    ${CMAKE_CURRENT_LIST_DIR}/string_decoder.h
                    ${CMAKE_CURRENT_LIST_DIR}/struct_pointer_decoder.h
                    ${CMAKE_CURRENT_LIST_DIR}/swapchain_image_tracker.h
                    ${CMAKE_CURRENT_LIST_DIR}/value_decoder.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_ascii_consumer_base.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_ascii_consumer_base.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_consumer_base.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_decoder_base.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_decoder_base.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_default_allocator.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_default_allocator.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_enum_util.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_feature_util.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_feature_util.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_handle_mapping_util.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_handle_mapping_util.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_object_cleanup_util.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_object_cleanup_util.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_object_info.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_object_info_table.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_object_info_table_base.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_realign_allocator.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_realign_allocator.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_rebind_allocator.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_rebind_allocator.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_referenced_resource_consumer_base.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_referenced_resource_consumer_base.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_remap_allocator.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_remap_allocator.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_replay_consumer_base.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_replay_consumer_base.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_replay_options.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_resource_allocator.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_resource_initializer.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_resource_initializer.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_resource_tracking_consumer.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_resource_tracking_consumer.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_tracked_object_info.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_tracked_object_info_table.h
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_tracked_object_info.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/vulkan_tracked_object_info_table.cpp
                    ${CMAKE_CURRENT_LIST_DIR}/window.h
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_ascii_consumer.h
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_ascii_consumer.cpp
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_consumer.h
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_decoder.h
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_decoder.cpp
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_feature_util.cpp
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_referenced_resource_consumer.h
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_referenced_resource_consumer.cpp
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_replay_consumer.h
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_replay_consumer.cpp
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_struct_decoders_forward.h
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_struct_decoders.h
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_struct_decoders.cpp
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_struct_handle_mappers.h
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_struct_handle_mappers.cpp
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_decode_pnext_struct.cpp
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_enum_to_string.h
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_enum_to_string.cpp
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_pnext_to_string.cpp
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_struct_to_string.h
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_struct_to_string.cpp
                    ${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_object_info_table_base2.h
)

if (MSVC)
    # These files may fail to compile with VS2017 and older, requiring the default section limit of 2^16 to be increased.
    set_source_files_properties(${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_struct_to_string.cpp PROPERTIES COMPILE_FLAGS /bigobj)
    set_source_files_properties(${CMAKE_CURRENT_LIST_DIR}/test/main.cpp PROPERTIES COMPILE_FLAGS /bigobj)
    if (MSVC_VERSION LESS 1920)
        set_source_files_properties(${CMAKE_SOURCE_DIR}/framework/generated/generated_decode_pnext_struct.cpp PROPERTIES COMPILE_FLAGS /bigobj)
        set_source_files_properties(${CMAKE_SOURCE_DIR}/framework/generated/generated_vulkan_replay_consumer.cpp PROPERTIES COMPILE_FLAGS /bigobj)
        set_source_files_properties(${CMAKE_CURRENT_LIST_DIR}/vulkan_object_cleanup_util.cpp PROPERTIES COMPILE_FLAGS /bigobj)
        set_source_files_properties(${CMAKE_CURRENT_LIST_DIR}/vulkan_replay_consumer_base.cpp PROPERTIES COMPILE_FLAGS /bigobj)
    endif()
endif()

target_include_directories(gfxrecon_decode
                           PUBLIC
                               ${CMAKE_SOURCE_DIR}/framework)

target_link_libraries(gfxrecon_decode gfxrecon_graphics gfxrecon_format gfxrecon_util vulkan_registry vulkan_memory_allocator platform_specific)

common_build_directives(gfxrecon_decode)

if (${RUN_TESTS})
    add_executable(gfxrecon_decode_test "")
    target_sources(gfxrecon_decode_test PRIVATE
            ${CMAKE_CURRENT_LIST_DIR}/test/main.cpp)
    target_link_libraries(gfxrecon_decode_test PRIVATE gfxrecon_decode)
    common_build_directives(gfxrecon_decode_test)
    common_test_directives(gfxrecon_decode_test)
endif()
