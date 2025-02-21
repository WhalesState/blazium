/**************************************************************************/
/*  node_3d.cpp                                                           */
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

#include "node_3d.h"

#include "scene/main/viewport.h"
#include "scene/property_utils.h"


Node3DGizmo::Node3DGizmo() {
}
void Node3D::_notify_dirty() {
}
void Node3D::_update_local_transform() const {
}
void Node3D::_update_rotation_and_scale() const {
}
void Node3D::_propagate_transform_changed_deferred() {
}
void Node3D::_propagate_transform_changed(Node3D *p_origin) {
}
void Node3D::_notification(int p_what) {
}
void Node3D::set_basis(const Basis &p_basis) {
}
void Node3D::set_quaternion(const Quaternion &p_quaternion) {
}
Vector3 Node3D::get_global_position() const {
	return Vector3();
}
Basis Node3D::get_global_basis() const {
	return Basis();
}
void Node3D::set_global_position(const Vector3 &p_position) {
}
void Node3D::set_global_basis(const Basis &p_basis) {
}
Vector3 Node3D::get_global_rotation() const {
	return get_global_transform().get_basis().get_euler();
}
Vector3 Node3D::get_global_rotation_degrees() const {
	return Vector3();
}
void Node3D::set_global_rotation(const Vector3 &p_euler_rad) {
}
void Node3D::set_global_rotation_degrees(const Vector3 &p_euler_degrees) {
}
void Node3D::set_transform(const Transform3D &p_transform) {
}
Basis Node3D::get_basis() const {
	return get_transform().basis;
}
Quaternion Node3D::get_quaternion() const {
	return get_transform().basis.get_rotation_quaternion();
}
void Node3D::set_global_transform(const Transform3D &p_transform) {
}
Transform3D Node3D::get_transform() const {
	return Transform3D();
}
Transform3D Node3D::get_global_transform() const {
	return Transform3D();
}
#ifdef TOOLS_ENABLED
Transform3D Node3D::get_global_gizmo_transform() const {
	return get_global_transform();
}

Transform3D Node3D::get_local_gizmo_transform() const {
	return get_transform();
}
#endif
Node3D *Node3D::get_parent_node_3d() const {
	return Object::cast_to<Node3D>(get_parent());
}
Transform3D Node3D::get_relative_transform(const Node *p_parent) const {
	return Transform3D();
}
void Node3D::set_position(const Vector3 &p_position) {
}
void Node3D::set_rotation_edit_mode(RotationEditMode p_mode) {
}
Node3D::RotationEditMode Node3D::get_rotation_edit_mode() const {
	return Node3D::RotationEditMode::ROTATION_EDIT_MODE_BASIS;
}
void Node3D::set_rotation_order(EulerOrder p_order) {
}
EulerOrder Node3D::get_rotation_order() const {
	return EulerOrder();
}
void Node3D::set_rotation(const Vector3 &p_euler_rad) {
}
void Node3D::set_rotation_degrees(const Vector3 &p_euler_degrees) {
}
void Node3D::set_scale(const Vector3 &p_scale) {
}
Vector3 Node3D::get_position() const {
	return Vector3();
}
Vector3 Node3D::get_rotation() const {
	return Vector3();
}
Vector3 Node3D::get_rotation_degrees() const {
	return Vector3();
}
Vector3 Node3D::get_scale() const {
	return Vector3();
}
void Node3D::update_gizmos() {
}
void Node3D::set_subgizmo_selection(Ref<Node3DGizmo> p_gizmo, int p_id, Transform3D p_transform) {
}
void Node3D::clear_subgizmo_selection() {
}
void Node3D::add_gizmo(Ref<Node3DGizmo> p_gizmo) {
}
void Node3D::remove_gizmo(Ref<Node3DGizmo> p_gizmo) {
}
void Node3D::clear_gizmos() {
}
TypedArray<Node3DGizmo> Node3D::get_gizmos_bind() const {
	return TypedArray<Node3DGizmo>();
}
Vector<Ref<Node3DGizmo>> Node3D::get_gizmos() const {
	return Vector<Ref<Node3DGizmo>>();
}
void Node3D::_replace_dirty_mask(uint32_t p_mask) const {
}
void Node3D::_set_dirty_bits(uint32_t p_bits) const {
}
void Node3D::_clear_dirty_bits(uint32_t p_bits) const {
}
void Node3D::_update_gizmos() {
}
void Node3D::set_disable_gizmos(bool p_enabled) {
}
void Node3D::reparent(Node *p_parent, bool p_keep_global_transform) {
}
void Node3D::set_disable_scale(bool p_enabled) {
}
bool Node3D::is_scale_disabled() const {
	return true;
}
void Node3D::set_as_top_level(bool p_enabled) {
}
void Node3D::set_as_top_level_keep_local(bool p_enabled) {
}
bool Node3D::is_set_as_top_level() const {
	return false;
}
void Node3D::_propagate_visibility_changed() {
}
void Node3D::show() {
}
void Node3D::hide() {
}
void Node3D::set_visible(bool p_visible) {
}
bool Node3D::is_visible() const {
	return false;
}
bool Node3D::is_visible_in_tree() const {
	return false;
}
void Node3D::rotate_object_local(const Vector3 &p_axis, real_t p_angle) {
}
void Node3D::rotate(const Vector3 &p_axis, real_t p_angle) {
}
void Node3D::rotate_x(real_t p_angle) {
}
void Node3D::rotate_y(real_t p_angle) {
}
void Node3D::rotate_z(real_t p_angle) {
}
void Node3D::translate(const Vector3 &p_offset) {
}
void Node3D::translate_object_local(const Vector3 &p_offset) {
}
void Node3D::scale(const Vector3 &p_ratio) {
}
void Node3D::scale_object_local(const Vector3 &p_scale) {
}
void Node3D::global_rotate(const Vector3 &p_axis, real_t p_angle) {
}
void Node3D::global_scale(const Vector3 &p_scale) {
}
void Node3D::global_translate(const Vector3 &p_offset) {
}
void Node3D::orthonormalize() {
}
void Node3D::set_identity() {
}
void Node3D::look_at(const Vector3 &p_target, const Vector3 &p_up, bool p_use_model_front) {
}
void Node3D::look_at_from_position(const Vector3 &p_pos, const Vector3 &p_target, const Vector3 &p_up, bool p_use_model_front) {
}
Vector3 Node3D::to_local(Vector3 p_global) const {
	return get_global_transform().affine_inverse().xform(p_global);
}
Vector3 Node3D::to_global(Vector3 p_local) const {
	return get_global_transform().xform(p_local);
}
void Node3D::set_notify_transform(bool p_enabled) {
}
bool Node3D::is_transform_notification_enabled() const {
	return true;
}
void Node3D::set_notify_local_transform(bool p_enabled) {
}
bool Node3D::is_local_transform_notification_enabled() const {
	return true;
}
void Node3D::force_update_transform() {
}
void Node3D::_update_visibility_parent(bool p_update_root) {
}
void Node3D::set_visibility_parent(const NodePath &p_path) {
}
NodePath Node3D::get_visibility_parent() const {
	return visibility_parent_path;
}
void Node3D::_validate_property(PropertyInfo &p_property) const {
}
bool Node3D::_property_can_revert(const StringName &p_name) const {
	return true;
}
bool Node3D::_property_get_revert(const StringName &p_name, Variant &r_property) const {
	return true;
}
void Node3D::_bind_methods() {
}
Node3D::Node3D() : xform_change(this) {}
