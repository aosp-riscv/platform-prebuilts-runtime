// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_LATENCY_INFO_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_LATENCY_INFO_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class ChromeLatencyInfo;
class ChromeLatencyInfo_ComponentInfo;
enum ChromeLatencyInfo_Step : int;
enum ChromeLatencyInfo_LatencyComponentType : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {
enum ChromeLatencyInfo_Step : int {
  ChromeLatencyInfo_Step_STEP_UNSPECIFIED = 0,
  ChromeLatencyInfo_Step_STEP_SEND_INPUT_EVENT_UI = 3,
  ChromeLatencyInfo_Step_STEP_HANDLE_INPUT_EVENT_IMPL = 5,
  ChromeLatencyInfo_Step_STEP_DID_HANDLE_INPUT_AND_OVERSCROLL = 8,
  ChromeLatencyInfo_Step_STEP_HANDLE_INPUT_EVENT_MAIN = 4,
  ChromeLatencyInfo_Step_STEP_MAIN_THREAD_SCROLL_UPDATE = 2,
  ChromeLatencyInfo_Step_STEP_HANDLE_INPUT_EVENT_MAIN_COMMIT = 1,
  ChromeLatencyInfo_Step_STEP_HANDLED_INPUT_EVENT_MAIN_OR_IMPL = 9,
  ChromeLatencyInfo_Step_STEP_HANDLED_INPUT_EVENT_IMPL = 10,
  ChromeLatencyInfo_Step_STEP_SWAP_BUFFERS = 6,
  ChromeLatencyInfo_Step_STEP_DRAW_AND_SWAP = 7,
  ChromeLatencyInfo_Step_STEP_FINISHED_SWAP_BUFFERS = 11,
};
enum ChromeLatencyInfo_LatencyComponentType : int {
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_UNSPECIFIED = 0,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_BEGIN_RWH = 1,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL = 2,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL = 3,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_ORIGINAL = 4,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_UI = 5,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_RENDERER_MAIN = 6,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN = 7,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL = 8,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_SCROLL_UPDATE_LAST_EVENT = 9,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_ACK_RWH = 10,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_RENDERER_SWAP = 11,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_DISPLAY_COMPOSITOR_RECEIVED_FRAME = 12,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_GPU_SWAP_BUFFER = 13,
  ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_FRAME_SWAP = 14,
};

class PERFETTO_EXPORT ChromeLatencyInfo : public ::protozero::CppMessageObj {
 public:
  using ComponentInfo = ChromeLatencyInfo_ComponentInfo;
  using Step = ChromeLatencyInfo_Step;
  static constexpr auto STEP_UNSPECIFIED = ChromeLatencyInfo_Step_STEP_UNSPECIFIED;
  static constexpr auto STEP_SEND_INPUT_EVENT_UI = ChromeLatencyInfo_Step_STEP_SEND_INPUT_EVENT_UI;
  static constexpr auto STEP_HANDLE_INPUT_EVENT_IMPL = ChromeLatencyInfo_Step_STEP_HANDLE_INPUT_EVENT_IMPL;
  static constexpr auto STEP_DID_HANDLE_INPUT_AND_OVERSCROLL = ChromeLatencyInfo_Step_STEP_DID_HANDLE_INPUT_AND_OVERSCROLL;
  static constexpr auto STEP_HANDLE_INPUT_EVENT_MAIN = ChromeLatencyInfo_Step_STEP_HANDLE_INPUT_EVENT_MAIN;
  static constexpr auto STEP_MAIN_THREAD_SCROLL_UPDATE = ChromeLatencyInfo_Step_STEP_MAIN_THREAD_SCROLL_UPDATE;
  static constexpr auto STEP_HANDLE_INPUT_EVENT_MAIN_COMMIT = ChromeLatencyInfo_Step_STEP_HANDLE_INPUT_EVENT_MAIN_COMMIT;
  static constexpr auto STEP_HANDLED_INPUT_EVENT_MAIN_OR_IMPL = ChromeLatencyInfo_Step_STEP_HANDLED_INPUT_EVENT_MAIN_OR_IMPL;
  static constexpr auto STEP_HANDLED_INPUT_EVENT_IMPL = ChromeLatencyInfo_Step_STEP_HANDLED_INPUT_EVENT_IMPL;
  static constexpr auto STEP_SWAP_BUFFERS = ChromeLatencyInfo_Step_STEP_SWAP_BUFFERS;
  static constexpr auto STEP_DRAW_AND_SWAP = ChromeLatencyInfo_Step_STEP_DRAW_AND_SWAP;
  static constexpr auto STEP_FINISHED_SWAP_BUFFERS = ChromeLatencyInfo_Step_STEP_FINISHED_SWAP_BUFFERS;
  static constexpr auto Step_MIN = ChromeLatencyInfo_Step_STEP_UNSPECIFIED;
  static constexpr auto Step_MAX = ChromeLatencyInfo_Step_STEP_FINISHED_SWAP_BUFFERS;
  using LatencyComponentType = ChromeLatencyInfo_LatencyComponentType;
  static constexpr auto COMPONENT_UNSPECIFIED = ChromeLatencyInfo_LatencyComponentType_COMPONENT_UNSPECIFIED;
  static constexpr auto COMPONENT_INPUT_EVENT_LATENCY_BEGIN_RWH = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_BEGIN_RWH;
  static constexpr auto COMPONENT_INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL;
  static constexpr auto COMPONENT_INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL;
  static constexpr auto COMPONENT_INPUT_EVENT_LATENCY_ORIGINAL = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_ORIGINAL;
  static constexpr auto COMPONENT_INPUT_EVENT_LATENCY_UI = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_UI;
  static constexpr auto COMPONENT_INPUT_EVENT_LATENCY_RENDERER_MAIN = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_RENDERER_MAIN;
  static constexpr auto COMPONENT_INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN;
  static constexpr auto COMPONENT_INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL;
  static constexpr auto COMPONENT_INPUT_EVENT_LATENCY_SCROLL_UPDATE_LAST_EVENT = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_SCROLL_UPDATE_LAST_EVENT;
  static constexpr auto COMPONENT_INPUT_EVENT_LATENCY_ACK_RWH = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_ACK_RWH;
  static constexpr auto COMPONENT_INPUT_EVENT_LATENCY_RENDERER_SWAP = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_RENDERER_SWAP;
  static constexpr auto COMPONENT_DISPLAY_COMPOSITOR_RECEIVED_FRAME = ChromeLatencyInfo_LatencyComponentType_COMPONENT_DISPLAY_COMPOSITOR_RECEIVED_FRAME;
  static constexpr auto COMPONENT_INPUT_EVENT_GPU_SWAP_BUFFER = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_GPU_SWAP_BUFFER;
  static constexpr auto COMPONENT_INPUT_EVENT_LATENCY_FRAME_SWAP = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_FRAME_SWAP;
  static constexpr auto LatencyComponentType_MIN = ChromeLatencyInfo_LatencyComponentType_COMPONENT_UNSPECIFIED;
  static constexpr auto LatencyComponentType_MAX = ChromeLatencyInfo_LatencyComponentType_COMPONENT_INPUT_EVENT_LATENCY_FRAME_SWAP;
  enum FieldNumbers {
    kTraceIdFieldNumber = 1,
    kStepFieldNumber = 2,
    kFrameTreeNodeIdFieldNumber = 3,
    kComponentInfoFieldNumber = 4,
    kIsCoalescedFieldNumber = 5,
    kGestureScrollIdFieldNumber = 6,
  };

  ChromeLatencyInfo();
  ~ChromeLatencyInfo() override;
  ChromeLatencyInfo(ChromeLatencyInfo&&) noexcept;
  ChromeLatencyInfo& operator=(ChromeLatencyInfo&&);
  ChromeLatencyInfo(const ChromeLatencyInfo&);
  ChromeLatencyInfo& operator=(const ChromeLatencyInfo&);
  bool operator==(const ChromeLatencyInfo&) const;
  bool operator!=(const ChromeLatencyInfo& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_trace_id() const { return _has_field_[1]; }
  int64_t trace_id() const { return trace_id_; }
  void set_trace_id(int64_t value) { trace_id_ = value; _has_field_.set(1); }

  bool has_step() const { return _has_field_[2]; }
  ChromeLatencyInfo_Step step() const { return step_; }
  void set_step(ChromeLatencyInfo_Step value) { step_ = value; _has_field_.set(2); }

  bool has_frame_tree_node_id() const { return _has_field_[3]; }
  int32_t frame_tree_node_id() const { return frame_tree_node_id_; }
  void set_frame_tree_node_id(int32_t value) { frame_tree_node_id_ = value; _has_field_.set(3); }

  const std::vector<ChromeLatencyInfo_ComponentInfo>& component_info() const { return component_info_; }
  std::vector<ChromeLatencyInfo_ComponentInfo>* mutable_component_info() { return &component_info_; }
  int component_info_size() const;
  void clear_component_info();
  ChromeLatencyInfo_ComponentInfo* add_component_info();

  bool has_is_coalesced() const { return _has_field_[5]; }
  bool is_coalesced() const { return is_coalesced_; }
  void set_is_coalesced(bool value) { is_coalesced_ = value; _has_field_.set(5); }

  bool has_gesture_scroll_id() const { return _has_field_[6]; }
  int64_t gesture_scroll_id() const { return gesture_scroll_id_; }
  void set_gesture_scroll_id(int64_t value) { gesture_scroll_id_ = value; _has_field_.set(6); }

 private:
  int64_t trace_id_{};
  ChromeLatencyInfo_Step step_{};
  int32_t frame_tree_node_id_{};
  std::vector<ChromeLatencyInfo_ComponentInfo> component_info_;
  bool is_coalesced_{};
  int64_t gesture_scroll_id_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<7> _has_field_{};
};


class PERFETTO_EXPORT ChromeLatencyInfo_ComponentInfo : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kComponentTypeFieldNumber = 1,
    kTimeUsFieldNumber = 2,
  };

  ChromeLatencyInfo_ComponentInfo();
  ~ChromeLatencyInfo_ComponentInfo() override;
  ChromeLatencyInfo_ComponentInfo(ChromeLatencyInfo_ComponentInfo&&) noexcept;
  ChromeLatencyInfo_ComponentInfo& operator=(ChromeLatencyInfo_ComponentInfo&&);
  ChromeLatencyInfo_ComponentInfo(const ChromeLatencyInfo_ComponentInfo&);
  ChromeLatencyInfo_ComponentInfo& operator=(const ChromeLatencyInfo_ComponentInfo&);
  bool operator==(const ChromeLatencyInfo_ComponentInfo&) const;
  bool operator!=(const ChromeLatencyInfo_ComponentInfo& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_component_type() const { return _has_field_[1]; }
  ChromeLatencyInfo_LatencyComponentType component_type() const { return component_type_; }
  void set_component_type(ChromeLatencyInfo_LatencyComponentType value) { component_type_ = value; _has_field_.set(1); }

  bool has_time_us() const { return _has_field_[2]; }
  uint64_t time_us() const { return time_us_; }
  void set_time_us(uint64_t value) { time_us_ = value; _has_field_.set(2); }

 private:
  ChromeLatencyInfo_LatencyComponentType component_type_{};
  uint64_t time_us_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_LATENCY_INFO_PROTO_CPP_H_
