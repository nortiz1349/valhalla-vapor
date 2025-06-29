// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: info.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_info_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_info_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025001 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_enum_util.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_info_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_info_2eproto {
  static const ::uint32_t offsets[];
};
namespace valhalla {
class CodedDescription;
struct CodedDescriptionDefaultTypeInternal;
extern CodedDescriptionDefaultTypeInternal _CodedDescription_default_instance_;
class Info;
struct InfoDefaultTypeInternal;
extern InfoDefaultTypeInternal _Info_default_instance_;
class Statistic;
struct StatisticDefaultTypeInternal;
extern StatisticDefaultTypeInternal _Statistic_default_instance_;
}  // namespace valhalla
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace valhalla {
enum StatisticType : int {
  count = 0,
  gauge = 1,
  timing = 2,
  set = 3,
  StatisticType_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  StatisticType_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool StatisticType_IsValid(int value);
extern const uint32_t StatisticType_internal_data_[];
constexpr StatisticType StatisticType_MIN = static_cast<StatisticType>(0);
constexpr StatisticType StatisticType_MAX = static_cast<StatisticType>(3);
constexpr int StatisticType_ARRAYSIZE = 3 + 1;
const std::string& StatisticType_Name(StatisticType value);
template <typename T>
const std::string& StatisticType_Name(T value) {
  static_assert(std::is_same<T, StatisticType>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to StatisticType_Name().");
  return StatisticType_Name(static_cast<StatisticType>(value));
}
const std::string& StatisticType_Name(StatisticType value);
bool StatisticType_Parse(absl::string_view name, StatisticType* value);

// ===================================================================


// -------------------------------------------------------------------

class Statistic final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:valhalla.Statistic) */ {
 public:
  inline Statistic() : Statistic(nullptr) {}
  ~Statistic() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Statistic(::google::protobuf::internal::ConstantInitialized);

  inline Statistic(const Statistic& from)
      : Statistic(nullptr, from) {}
  Statistic(Statistic&& from) noexcept
    : Statistic() {
    *this = ::std::move(from);
  }

  inline Statistic& operator=(const Statistic& from) {
    CopyFrom(from);
    return *this;
  }
  inline Statistic& operator=(Statistic&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const Statistic& default_instance() {
    return *internal_default_instance();
  }
  static inline const Statistic* internal_default_instance() {
    return reinterpret_cast<const Statistic*>(
               &_Statistic_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Statistic& a, Statistic& b) {
    a.Swap(&b);
  }
  inline void Swap(Statistic* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Statistic* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Statistic* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Statistic>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const Statistic& from);
  void MergeFrom(const Statistic& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Statistic* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "valhalla.Statistic";
  }
  protected:
  explicit Statistic(::google::protobuf::Arena* arena);
  Statistic(::google::protobuf::Arena* arena, const Statistic& from);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
    kValueFieldNumber = 2,
    kFrequencyFieldNumber = 3,
    kTypeFieldNumber = 4,
  };
  // string key = 1;
  void clear_key() ;
  const std::string& key() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_key(Arg_&& arg, Args_... args);
  std::string* mutable_key();
  PROTOBUF_NODISCARD std::string* release_key();
  void set_allocated_key(std::string* value);

  private:
  const std::string& _internal_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key(
      const std::string& value);
  std::string* _internal_mutable_key();

  public:
  // double value = 2;
  void clear_value() ;
  double value() const;
  void set_value(double value);

  private:
  double _internal_value() const;
  void _internal_set_value(double value);

  public:
  // float frequency = 3;
  void clear_frequency() ;
  float frequency() const;
  void set_frequency(float value);

  private:
  float _internal_frequency() const;
  void _internal_set_frequency(float value);

  public:
  // .valhalla.StatisticType type = 4;
  void clear_type() ;
  ::valhalla::StatisticType type() const;
  void set_type(::valhalla::StatisticType value);

  private:
  ::valhalla::StatisticType _internal_type() const;
  void _internal_set_type(::valhalla::StatisticType value);

  public:
  // @@protoc_insertion_point(class_scope:valhalla.Statistic)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 4, 0,
      30, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr key_;
    double value_;
    float frequency_;
    int type_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_info_2eproto;
};// -------------------------------------------------------------------

class CodedDescription final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:valhalla.CodedDescription) */ {
 public:
  inline CodedDescription() : CodedDescription(nullptr) {}
  ~CodedDescription() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR CodedDescription(::google::protobuf::internal::ConstantInitialized);

  inline CodedDescription(const CodedDescription& from)
      : CodedDescription(nullptr, from) {}
  CodedDescription(CodedDescription&& from) noexcept
    : CodedDescription() {
    *this = ::std::move(from);
  }

  inline CodedDescription& operator=(const CodedDescription& from) {
    CopyFrom(from);
    return *this;
  }
  inline CodedDescription& operator=(CodedDescription&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const CodedDescription& default_instance() {
    return *internal_default_instance();
  }
  static inline const CodedDescription* internal_default_instance() {
    return reinterpret_cast<const CodedDescription*>(
               &_CodedDescription_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CodedDescription& a, CodedDescription& b) {
    a.Swap(&b);
  }
  inline void Swap(CodedDescription* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CodedDescription* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CodedDescription* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CodedDescription>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const CodedDescription& from);
  void MergeFrom(const CodedDescription& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(CodedDescription* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "valhalla.CodedDescription";
  }
  protected:
  explicit CodedDescription(::google::protobuf::Arena* arena);
  CodedDescription(::google::protobuf::Arena* arena, const CodedDescription& from);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDescriptionFieldNumber = 1,
    kCodeFieldNumber = 2,
  };
  // string description = 1;
  void clear_description() ;
  const std::string& description() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_description(Arg_&& arg, Args_... args);
  std::string* mutable_description();
  PROTOBUF_NODISCARD std::string* release_description();
  void set_allocated_description(std::string* value);

  private:
  const std::string& _internal_description() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_description(
      const std::string& value);
  std::string* _internal_mutable_description();

  public:
  // uint64 code = 2;
  void clear_code() ;
  ::uint64_t code() const;
  void set_code(::uint64_t value);

  private:
  ::uint64_t _internal_code() const;
  void _internal_set_code(::uint64_t value);

  public:
  // @@protoc_insertion_point(class_scope:valhalla.CodedDescription)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      45, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr description_;
    ::uint64_t code_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_info_2eproto;
};// -------------------------------------------------------------------

class Info final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:valhalla.Info) */ {
 public:
  inline Info() : Info(nullptr) {}
  ~Info() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Info(::google::protobuf::internal::ConstantInitialized);

  inline Info(const Info& from)
      : Info(nullptr, from) {}
  Info(Info&& from) noexcept
    : Info() {
    *this = ::std::move(from);
  }

  inline Info& operator=(const Info& from) {
    CopyFrom(from);
    return *this;
  }
  inline Info& operator=(Info&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const Info& default_instance() {
    return *internal_default_instance();
  }
  static inline const Info* internal_default_instance() {
    return reinterpret_cast<const Info*>(
               &_Info_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Info& a, Info& b) {
    a.Swap(&b);
  }
  inline void Swap(Info* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Info* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Info* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Info>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)  final;
  void CopyFrom(const Info& from);
  void MergeFrom(const Info& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Info* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "valhalla.Info";
  }
  protected:
  explicit Info(::google::protobuf::Arena* arena);
  Info(::google::protobuf::Arena* arena, const Info& from);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStatisticsFieldNumber = 1,
    kErrorsFieldNumber = 2,
    kWarningsFieldNumber = 3,
    kIsServiceFieldNumber = 4,
  };
  // repeated .valhalla.Statistic statistics = 1;
  int statistics_size() const;
  private:
  int _internal_statistics_size() const;

  public:
  void clear_statistics() ;
  ::valhalla::Statistic* mutable_statistics(int index);
  ::google::protobuf::RepeatedPtrField< ::valhalla::Statistic >*
      mutable_statistics();
  private:
  const ::google::protobuf::RepeatedPtrField<::valhalla::Statistic>& _internal_statistics() const;
  ::google::protobuf::RepeatedPtrField<::valhalla::Statistic>* _internal_mutable_statistics();
  public:
  const ::valhalla::Statistic& statistics(int index) const;
  ::valhalla::Statistic* add_statistics();
  const ::google::protobuf::RepeatedPtrField< ::valhalla::Statistic >&
      statistics() const;
  // repeated .valhalla.CodedDescription errors = 2;
  int errors_size() const;
  private:
  int _internal_errors_size() const;

  public:
  void clear_errors() ;
  ::valhalla::CodedDescription* mutable_errors(int index);
  ::google::protobuf::RepeatedPtrField< ::valhalla::CodedDescription >*
      mutable_errors();
  private:
  const ::google::protobuf::RepeatedPtrField<::valhalla::CodedDescription>& _internal_errors() const;
  ::google::protobuf::RepeatedPtrField<::valhalla::CodedDescription>* _internal_mutable_errors();
  public:
  const ::valhalla::CodedDescription& errors(int index) const;
  ::valhalla::CodedDescription* add_errors();
  const ::google::protobuf::RepeatedPtrField< ::valhalla::CodedDescription >&
      errors() const;
  // repeated .valhalla.CodedDescription warnings = 3;
  int warnings_size() const;
  private:
  int _internal_warnings_size() const;

  public:
  void clear_warnings() ;
  ::valhalla::CodedDescription* mutable_warnings(int index);
  ::google::protobuf::RepeatedPtrField< ::valhalla::CodedDescription >*
      mutable_warnings();
  private:
  const ::google::protobuf::RepeatedPtrField<::valhalla::CodedDescription>& _internal_warnings() const;
  ::google::protobuf::RepeatedPtrField<::valhalla::CodedDescription>* _internal_mutable_warnings();
  public:
  const ::valhalla::CodedDescription& warnings(int index) const;
  ::valhalla::CodedDescription* add_warnings();
  const ::google::protobuf::RepeatedPtrField< ::valhalla::CodedDescription >&
      warnings() const;
  // bool is_service = 4;
  void clear_is_service() ;
  bool is_service() const;
  void set_is_service(bool value);

  private:
  bool _internal_is_service() const;
  void _internal_set_is_service(bool value);

  public:
  // @@protoc_insertion_point(class_scope:valhalla.Info)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 4, 3,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::RepeatedPtrField< ::valhalla::Statistic > statistics_;
    ::google::protobuf::RepeatedPtrField< ::valhalla::CodedDescription > errors_;
    ::google::protobuf::RepeatedPtrField< ::valhalla::CodedDescription > warnings_;
    bool is_service_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_info_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Statistic

// string key = 1;
inline void Statistic::clear_key() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.key_.ClearToEmpty();
}
inline const std::string& Statistic::key() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:valhalla.Statistic.key)
  return _internal_key();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Statistic::set_key(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.key_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:valhalla.Statistic.key)
}
inline std::string* Statistic::mutable_key() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_key();
  // @@protoc_insertion_point(field_mutable:valhalla.Statistic.key)
  return _s;
}
inline const std::string& Statistic::_internal_key() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.key_.Get();
}
inline void Statistic::_internal_set_key(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.key_.Set(value, GetArena());
}
inline std::string* Statistic::_internal_mutable_key() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.key_.Mutable( GetArena());
}
inline std::string* Statistic::release_key() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:valhalla.Statistic.key)
  return _impl_.key_.Release();
}
inline void Statistic::set_allocated_key(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.key_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.key_.IsDefault()) {
          _impl_.key_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:valhalla.Statistic.key)
}

// double value = 2;
inline void Statistic::clear_value() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.value_ = 0;
}
inline double Statistic::value() const {
  // @@protoc_insertion_point(field_get:valhalla.Statistic.value)
  return _internal_value();
}
inline void Statistic::set_value(double value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:valhalla.Statistic.value)
}
inline double Statistic::_internal_value() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.value_;
}
inline void Statistic::_internal_set_value(double value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.value_ = value;
}

// float frequency = 3;
inline void Statistic::clear_frequency() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.frequency_ = 0;
}
inline float Statistic::frequency() const {
  // @@protoc_insertion_point(field_get:valhalla.Statistic.frequency)
  return _internal_frequency();
}
inline void Statistic::set_frequency(float value) {
  _internal_set_frequency(value);
  // @@protoc_insertion_point(field_set:valhalla.Statistic.frequency)
}
inline float Statistic::_internal_frequency() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.frequency_;
}
inline void Statistic::_internal_set_frequency(float value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.frequency_ = value;
}

// .valhalla.StatisticType type = 4;
inline void Statistic::clear_type() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.type_ = 0;
}
inline ::valhalla::StatisticType Statistic::type() const {
  // @@protoc_insertion_point(field_get:valhalla.Statistic.type)
  return _internal_type();
}
inline void Statistic::set_type(::valhalla::StatisticType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:valhalla.Statistic.type)
}
inline ::valhalla::StatisticType Statistic::_internal_type() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::valhalla::StatisticType>(_impl_.type_);
}
inline void Statistic::_internal_set_type(::valhalla::StatisticType value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.type_ = value;
}

// -------------------------------------------------------------------

// CodedDescription

// string description = 1;
inline void CodedDescription::clear_description() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.description_.ClearToEmpty();
}
inline const std::string& CodedDescription::description() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:valhalla.CodedDescription.description)
  return _internal_description();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CodedDescription::set_description(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.description_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:valhalla.CodedDescription.description)
}
inline std::string* CodedDescription::mutable_description() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_description();
  // @@protoc_insertion_point(field_mutable:valhalla.CodedDescription.description)
  return _s;
}
inline const std::string& CodedDescription::_internal_description() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.description_.Get();
}
inline void CodedDescription::_internal_set_description(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.description_.Set(value, GetArena());
}
inline std::string* CodedDescription::_internal_mutable_description() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.description_.Mutable( GetArena());
}
inline std::string* CodedDescription::release_description() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:valhalla.CodedDescription.description)
  return _impl_.description_.Release();
}
inline void CodedDescription::set_allocated_description(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.description_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.description_.IsDefault()) {
          _impl_.description_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:valhalla.CodedDescription.description)
}

// uint64 code = 2;
inline void CodedDescription::clear_code() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.code_ = ::uint64_t{0u};
}
inline ::uint64_t CodedDescription::code() const {
  // @@protoc_insertion_point(field_get:valhalla.CodedDescription.code)
  return _internal_code();
}
inline void CodedDescription::set_code(::uint64_t value) {
  _internal_set_code(value);
  // @@protoc_insertion_point(field_set:valhalla.CodedDescription.code)
}
inline ::uint64_t CodedDescription::_internal_code() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.code_;
}
inline void CodedDescription::_internal_set_code(::uint64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.code_ = value;
}

// -------------------------------------------------------------------

// Info

// repeated .valhalla.Statistic statistics = 1;
inline int Info::_internal_statistics_size() const {
  return _internal_statistics().size();
}
inline int Info::statistics_size() const {
  return _internal_statistics_size();
}
inline void Info::clear_statistics() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.statistics_.Clear();
}
inline ::valhalla::Statistic* Info::mutable_statistics(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:valhalla.Info.statistics)
  return _internal_mutable_statistics()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::valhalla::Statistic>* Info::mutable_statistics()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:valhalla.Info.statistics)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_statistics();
}
inline const ::valhalla::Statistic& Info::statistics(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:valhalla.Info.statistics)
  return _internal_statistics().Get(index);
}
inline ::valhalla::Statistic* Info::add_statistics() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::valhalla::Statistic* _add = _internal_mutable_statistics()->Add();
  // @@protoc_insertion_point(field_add:valhalla.Info.statistics)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::valhalla::Statistic>& Info::statistics() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:valhalla.Info.statistics)
  return _internal_statistics();
}
inline const ::google::protobuf::RepeatedPtrField<::valhalla::Statistic>&
Info::_internal_statistics() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.statistics_;
}
inline ::google::protobuf::RepeatedPtrField<::valhalla::Statistic>*
Info::_internal_mutable_statistics() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.statistics_;
}

// repeated .valhalla.CodedDescription errors = 2;
inline int Info::_internal_errors_size() const {
  return _internal_errors().size();
}
inline int Info::errors_size() const {
  return _internal_errors_size();
}
inline void Info::clear_errors() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.errors_.Clear();
}
inline ::valhalla::CodedDescription* Info::mutable_errors(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:valhalla.Info.errors)
  return _internal_mutable_errors()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::valhalla::CodedDescription>* Info::mutable_errors()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:valhalla.Info.errors)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_errors();
}
inline const ::valhalla::CodedDescription& Info::errors(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:valhalla.Info.errors)
  return _internal_errors().Get(index);
}
inline ::valhalla::CodedDescription* Info::add_errors() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::valhalla::CodedDescription* _add = _internal_mutable_errors()->Add();
  // @@protoc_insertion_point(field_add:valhalla.Info.errors)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::valhalla::CodedDescription>& Info::errors() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:valhalla.Info.errors)
  return _internal_errors();
}
inline const ::google::protobuf::RepeatedPtrField<::valhalla::CodedDescription>&
Info::_internal_errors() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.errors_;
}
inline ::google::protobuf::RepeatedPtrField<::valhalla::CodedDescription>*
Info::_internal_mutable_errors() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.errors_;
}

// repeated .valhalla.CodedDescription warnings = 3;
inline int Info::_internal_warnings_size() const {
  return _internal_warnings().size();
}
inline int Info::warnings_size() const {
  return _internal_warnings_size();
}
inline void Info::clear_warnings() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.warnings_.Clear();
}
inline ::valhalla::CodedDescription* Info::mutable_warnings(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:valhalla.Info.warnings)
  return _internal_mutable_warnings()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::valhalla::CodedDescription>* Info::mutable_warnings()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:valhalla.Info.warnings)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_warnings();
}
inline const ::valhalla::CodedDescription& Info::warnings(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:valhalla.Info.warnings)
  return _internal_warnings().Get(index);
}
inline ::valhalla::CodedDescription* Info::add_warnings() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::valhalla::CodedDescription* _add = _internal_mutable_warnings()->Add();
  // @@protoc_insertion_point(field_add:valhalla.Info.warnings)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::valhalla::CodedDescription>& Info::warnings() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:valhalla.Info.warnings)
  return _internal_warnings();
}
inline const ::google::protobuf::RepeatedPtrField<::valhalla::CodedDescription>&
Info::_internal_warnings() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.warnings_;
}
inline ::google::protobuf::RepeatedPtrField<::valhalla::CodedDescription>*
Info::_internal_mutable_warnings() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.warnings_;
}

// bool is_service = 4;
inline void Info::clear_is_service() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.is_service_ = false;
}
inline bool Info::is_service() const {
  // @@protoc_insertion_point(field_get:valhalla.Info.is_service)
  return _internal_is_service();
}
inline void Info::set_is_service(bool value) {
  _internal_set_is_service(value);
  // @@protoc_insertion_point(field_set:valhalla.Info.is_service)
}
inline bool Info::_internal_is_service() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.is_service_;
}
inline void Info::_internal_set_is_service(bool value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.is_service_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace valhalla


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::valhalla::StatisticType> : std::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_info_2eproto_2epb_2eh
