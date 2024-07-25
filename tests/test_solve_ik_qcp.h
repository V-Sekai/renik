/**************************************************************************/
/*  test_solve_ik_qcp.h                                                   */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

#ifndef TEST_SOLVE_IK_QCP_H
#define TEST_SOLVE_IK_QCP_H

// #include "core/math/transform_3d.h"
// #include "modules/renik/renik/renik_chain.h"
// #include "modules/renik/renik.h"
// #include "scene/3d/skeleton_3d.h"
// #include "tests/test_macros.h"

namespace TestSolveIKQCP {
// TEST_CASE("[Modules][RenIK][SceneTree] Solve IK QCP") {
//     double epsilon = CMP_EPSILON;

//     Ref<RenIKChain> chain;
//     chain.instantiate();
//     chain->init(Vector3(0, 1, 0), 0.5f, 0.5f, 0.2f, 0.1f);

//     Skeleton3D *skeleton = memnew(Skeleton3D);

//     skeleton->add_bone("root_bone");
//     skeleton->add_bone("leaf_bone");
//     CHECK_EQ(skeleton->get_bone_count(), 2);
//     BoneId root_bone_id = skeleton->find_bone("root_bone");
//     CHECK_NE(root_bone_id, -1);
//     BoneId leaf_bone_id = skeleton->find_bone("leaf_bone");
//     CHECK_NE(leaf_bone_id, -1);
// 	skeleton->set_bone_parent(leaf_bone_id, root_bone_id);
//     Transform3D root_rest_pose(Basis(), Vector3(0, 0, 0));
//     Transform3D leaf_rest_pose(Basis(), Vector3(1, 0, 0));
//     skeleton->set_bone_rest(root_bone_id, root_rest_pose);
//     skeleton->set_bone_rest(leaf_bone_id, leaf_rest_pose);
//     chain->set_root_bone(skeleton, root_bone_id);
// 	chain->set_leaf_bone(skeleton, leaf_bone_id);

//     Transform3D root(Basis(), Vector3(0, 0, 0));
//     Transform3D target(Basis(), Vector3(2, 0, 0));

//     RenIK *renik = memnew(RenIK);
//     skeleton->add_child(renik);
//     renik->set_owner(skeleton);
//     renik->set_skeleton_path(NodePath(".."));
//     renik->set_setup_humanoid_bones(true);
//     renik->set_live_preview(true);
//     HashMap<BoneId, Quaternion> result = renik->solve_ik_qcp(chain, root, target);

//     CHECK(result.has(root_bone_id));
//     CHECK(result.has(leaf_bone_id));

//     Quaternion expected_rotation = Quaternion();
//     CHECK(abs(result[root_bone_id].x - expected_rotation.x) < epsilon);
//     CHECK(abs(result[root_bone_id].y - expected_rotation.y) < epsilon);
//     CHECK(abs(result[root_bone_id].z - expected_rotation.z) < epsilon);
//     CHECK(abs(result[root_bone_id].w - expected_rotation.w) < epsilon);

//     CHECK(abs(result[leaf_bone_id].x - expected_rotation.x) < epsilon);
//     CHECK(abs(result[leaf_bone_id].y - expected_rotation.y) < epsilon);
//     CHECK(abs(result[leaf_bone_id].z - expected_rotation.z) < epsilon);
//     CHECK(abs(result[leaf_bone_id].w - expected_rotation.w) < epsilon);
// }
} // namespace TestSolveIKQCP

#endif // TEST_SOLVE_IK_QCP_H
