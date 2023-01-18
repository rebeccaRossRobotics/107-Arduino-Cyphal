//
// This is an AUTO-GENERATED UAVCAN DSDL data type implementation. Curious? See https://opencyphal.org.
// You shouldn't attempt to edit this file.
//
// Checking this file under version control is not recommended since metadata in this header will change for each
// build invocation. TODO: add --reproducible option to prevent any volatile metadata from being generated.
//
// Generator:     nunavut-1.9.0 (serialization was enabled)
// Source file:   /tmp/public_regulated_data_types/uavcan/node/port/7510.List.0.1.dsdl
// Generated at:  2023-01-18 06:33:55.937243 UTC
// Is deprecated: no
// Fixed port-ID: 7510
// Full name:     uavcan.node.port.List
// Type Version:  0.1
// Support
//    Support Namespace: nunavut.lang.cpp.support
//    Support Version:   (1, 0, 0)
// Template Set (package)
//    priority: 0
//    package:  nunavut.lang.cpp.templates
//    version:  (1, 0, 0)
// Platform
//     python_implementation:  CPython
//     python_version:  3.10.6
//     python_release_level:  final
//     python_build:  ('main', 'Nov 14 2022 16:10:14')
//     python_compiler:  GCC 11.3.0
//     python_revision:
//     python_xoptions:  {}
//     runtime_platform:  Linux-5.15.0-58-generic-x86_64-with-glibc2.35
// Language Options
//     target_endianness:  any
//     omit_float_serialization_support:  False
//     enable_serialization_asserts:  True
//     enable_override_variable_array_capacity:  False
//     std:  c++14
//     variable_array_type_template:
//     variable_array_type_include:
//     cast_format:  static_cast<{type}>({value})
//     enable_allocator_support:  False
// Uses Language Features
//     Uses std_variant:no
#ifndef UAVCAN_NODE_PORT_LIST_0_1_HPP_INCLUDED
#define UAVCAN_NODE_PORT_LIST_0_1_HPP_INCLUDED

#include "nunavut/support/serialization.hpp"
#include "uavcan/node/port/ServiceIDList_0_1.hpp"
#include "uavcan/node/port/SubjectIDList_0_1.hpp"
#include <cstdint>

namespace uavcan
{
namespace node
{
namespace port
{
// +-------------------------------------------------------------------------------------------------------------------+
// | LANGUAGE OPTION ASSERTIONS
// |    These static assertions ensure that the header is being used with
// | Nunavut C++ serialization support that is compatible with the language
// | options in effect when that support code was generated.
// +-------------------------------------------------------------------------------------------------------------------+
static_assert( nunavut::support::options::target_endianness == 1693710260,
              "/tmp/public_regulated_data_types/uavcan/node/port/7510.List.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::omit_float_serialization_support == 0,
              "/tmp/public_regulated_data_types/uavcan/node/port/7510.List.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::enable_serialization_asserts == 1,
              "/tmp/public_regulated_data_types/uavcan/node/port/7510.List.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::enable_override_variable_array_capacity == 0,
              "/tmp/public_regulated_data_types/uavcan/node/port/7510.List.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::std == 3161622713,
              "/tmp/public_regulated_data_types/uavcan/node/port/7510.List.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::variable_array_type_template == 0,
              "/tmp/public_regulated_data_types/uavcan/node/port/7510.List.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::variable_array_type_include == 0,
              "/tmp/public_regulated_data_types/uavcan/node/port/7510.List.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::cast_format == 1407868567,
              "/tmp/public_regulated_data_types/uavcan/node/port/7510.List.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );
static_assert( nunavut::support::options::enable_allocator_support == 0,
              "/tmp/public_regulated_data_types/uavcan/node/port/7510.List.0.1.dsdl "
              "is trying to use a serialization library that was compiled with "
              "different language options. This is dangerous and therefore not "
              "allowed." );

// +-------------------------------------------------------------------------------------------------------------------+
// | This implementation uses a minimal variant implementation that is forward-compatible with the same types generated
// | using the C++17 variant type in the standard library. This minimal variant implementation is limited in the
// | following ways:
// |    1. Supports only emplace and get_if.
// |    2. Only support access by index (see the IndexOf property of the VariantType).
// |    3. This object cannot be copy-constructed nor move-constructed.
// |    4. There is an O(n) lookup in this object's destructor and in the
// |       emplace method.
// |
// | The C++17 version of this object will define the same emplace and get_if wrappers so code written against this
// | version will be fully-forward compatible, but the C++17 version exposes the variant type directly allowing full
// | use of that standard library feature – it is therefore not backwards-compatible.
// +-------------------------------------------------------------------------------------------------------------------+
///
/// A list of ports that this node is using:
/// - Subjects published by this node (whether periodically or ad-hoc).
/// - Subjects that this node is subscribed to (a datalogger or a debugger would typically subscribe to all subjects).
/// - RPC services consumed by this node (i.e., service clients).
/// - RPC services provided by this node (i.e., service servers).
/// All nodes should implement this capability to provide network introspection and diagnostic capabilities.
/// This message should be published using the fixed subject-ID as follows:
/// - At the OPTIONAL priority level at least every MAX_PUBLICATION_PERIOD seconds.
/// - At the OPTIONAL or SLOW priority level within MAX_PUBLICATION_PERIOD after the port configuration is changed.
///
struct List_0_1 final
{
    // +---------------------------------------------------------------------------------------------------------------+
    // | PORT IDENTIFIERS
    // +---------------------------------------------------------------------------------------------------------------+
    static constexpr bool HasFixedPortID = true;
    static constexpr std::uint16_t FixedPortId = 7510U;
    static constexpr bool IsServiceType = false;

    /// Extent is the minimum amount of memory required to hold any serialized representation of any compatible
    /// version of the data type; or, on other words, it is the the maximum possible size of received objects of this type.
    /// The size is specified in bytes (rather than bits) because by definition, extent is an integer number of bytes long.
    /// When allocating a deserialization (RX) buffer for this data type, it should be at least extent bytes large.
    /// When allocating a serialization (TX) buffer, it is safe to use the size of the largest serialized representation
    /// instead of the extent because it provides a tighter bound of the object size; it is safe because the concrete type
    /// is always known during serialization (unlike deserialization). If not sure, use extent everywhere.

    static constexpr std::size_t EXTENT_BYTES                    =8466UL;
    static constexpr std::size_t SERIALIZATION_BUFFER_SIZE_BYTES =8466UL;
    static_assert(EXTENT_BYTES >= SERIALIZATION_BUFFER_SIZE_BYTES, "Internal constraint violation");
    static_assert(EXTENT_BYTES < (std::numeric_limits<std::size_t>::max() /8U), "This message is too large to be handled by current types!");

    // +---------------------------------------------------------------------------------------------------------------+
    // | CONSTANTS
    // +---------------------------------------------------------------------------------------------------------------+
    ///
    /// [seconds]
    /// If the port configuration is not updated in this amount of time, the node should publish this message anyway.
    ///
    static constexpr std::uint8_t MAX_PUBLICATION_PERIOD = 10U;

    // +----------------------------------------------------------------------+
    // | FIELDS
    // +----------------------------------------------------------------------+

    uavcan::node::port::SubjectIDList_0_1 publishers;

    uavcan::node::port::SubjectIDList_0_1 subscribers;

    uavcan::node::port::ServiceIDList_0_1 clients;

    uavcan::node::port::ServiceIDList_0_1 servers;

    nunavut::support::SerializeResult
    serialize(nunavut::support::bitspan out_buffer) const
    {
        const std::size_t capacity_bits = out_buffer.size();
        if ((static_cast<std::size_t>(capacity_bits)) < 67728UL)
        {
            return -nunavut::support::Error::SERIALIZATION_BUFFER_TOO_SMALL;
        }
        // Notice that fields that are not an integer number of bytes long may overrun the space allocated for them
        // in the serialization buffer up to the next byte boundary. This is by design and is guaranteed to be safe.
        NUNAVUT_ASSERT(out_buffer.offset_alings_to_byte());
        {   // uavcan.node.port.SubjectIDList.0.1 publishers
            NUNAVUT_ASSERT(out_buffer.offset_alings_to(8U));
            NUNAVUT_ASSERT(out_buffer.offset_alings_to_byte());
            NUNAVUT_ASSERT(32808ULL <= out_buffer.size());
            std::size_t _size_bytes0_ = 1025UL;  // Nested object (max) size, in bytes.
            // Reserve space for the delimiter header.
            auto _subspan0_ = out_buffer.subspan(32U, _size_bytes0_ * 8U);
            if(not _subspan0_){
                return -_subspan0_.error();
            }
            NUNAVUT_ASSERT(_subspan0_->offset_alings_to_byte());
            auto _err0_ = publishers.serialize(_subspan0_.value());
            if (not _err0_)
            {
                return _err0_;
            }
            _size_bytes0_ = _err0_.value();
            // It is assumed that we know the exact type of the serialized entity, hence we expect the size to match.
            NUNAVUT_ASSERT((_size_bytes0_ * 8U) >= 8ULL);
            NUNAVUT_ASSERT((_size_bytes0_ * 8U) <= 8200ULL);
            // Jump back to write the delimiter header after the nested object is serialized and its length is known.
            const auto _result3_ = out_buffer.setUxx(_size_bytes0_, 32U);
            if(not _result3_){
                return -_result3_.error();
            }
            out_buffer.add_offset(32U);
            out_buffer.add_offset(_size_bytes0_ * 8U);
            // NUNAVUT_ASSERT(out_buffer.size() >= 0);
        }
        {
            const auto _result0_ = out_buffer.padAndMoveToAlignment(8U);
            if(not _result0_){
                return -_result0_.error();
            }
        }
        {   // uavcan.node.port.SubjectIDList.0.1 subscribers
            NUNAVUT_ASSERT(out_buffer.offset_alings_to(8U));
            NUNAVUT_ASSERT(out_buffer.offset_alings_to_byte());
            NUNAVUT_ASSERT(32808ULL <= out_buffer.size());
            std::size_t _size_bytes0_ = 1025UL;  // Nested object (max) size, in bytes.
            // Reserve space for the delimiter header.
            auto _subspan0_ = out_buffer.subspan(32U, _size_bytes0_ * 8U);
            if(not _subspan0_){
                return -_subspan0_.error();
            }
            NUNAVUT_ASSERT(_subspan0_->offset_alings_to_byte());
            auto _err0_ = subscribers.serialize(_subspan0_.value());
            if (not _err0_)
            {
                return _err0_;
            }
            _size_bytes0_ = _err0_.value();
            // It is assumed that we know the exact type of the serialized entity, hence we expect the size to match.
            NUNAVUT_ASSERT((_size_bytes0_ * 8U) >= 8ULL);
            NUNAVUT_ASSERT((_size_bytes0_ * 8U) <= 8200ULL);
            // Jump back to write the delimiter header after the nested object is serialized and its length is known.
            const auto _result3_ = out_buffer.setUxx(_size_bytes0_, 32U);
            if(not _result3_){
                return -_result3_.error();
            }
            out_buffer.add_offset(32U);
            out_buffer.add_offset(_size_bytes0_ * 8U);
            // NUNAVUT_ASSERT(out_buffer.size() >= 0);
        }
        {
            const auto _result0_ = out_buffer.padAndMoveToAlignment(8U);
            if(not _result0_){
                return -_result0_.error();
            }
        }
        {   // uavcan.node.port.ServiceIDList.0.1 clients
            NUNAVUT_ASSERT(out_buffer.offset_alings_to(8U));
            NUNAVUT_ASSERT(out_buffer.offset_alings_to_byte());
            NUNAVUT_ASSERT(1056ULL <= out_buffer.size());
            std::size_t _size_bytes0_ = 64UL;  // Nested object (max) size, in bytes.
            // Reserve space for the delimiter header.
            auto _subspan0_ = out_buffer.subspan(32U, _size_bytes0_ * 8U);
            if(not _subspan0_){
                return -_subspan0_.error();
            }
            NUNAVUT_ASSERT(_subspan0_->offset_alings_to_byte());
            auto _err0_ = clients.serialize(_subspan0_.value());
            if (not _err0_)
            {
                return _err0_;
            }
            _size_bytes0_ = _err0_.value();
            // It is assumed that we know the exact type of the serialized entity, hence we expect the size to match.
            NUNAVUT_ASSERT((_size_bytes0_ * 8U) == 512ULL);
            // Jump back to write the delimiter header after the nested object is serialized and its length is known.
            const auto _result3_ = out_buffer.setUxx(_size_bytes0_, 32U);
            if(not _result3_){
                return -_result3_.error();
            }
            out_buffer.add_offset(32U);
            out_buffer.add_offset(_size_bytes0_ * 8U);
            // NUNAVUT_ASSERT(out_buffer.size() >= 0);
        }
        {
            const auto _result0_ = out_buffer.padAndMoveToAlignment(8U);
            if(not _result0_){
                return -_result0_.error();
            }
        }
        {   // uavcan.node.port.ServiceIDList.0.1 servers
            NUNAVUT_ASSERT(out_buffer.offset_alings_to(8U));
            NUNAVUT_ASSERT(out_buffer.offset_alings_to_byte());
            NUNAVUT_ASSERT(1056ULL <= out_buffer.size());
            std::size_t _size_bytes0_ = 64UL;  // Nested object (max) size, in bytes.
            // Reserve space for the delimiter header.
            auto _subspan0_ = out_buffer.subspan(32U, _size_bytes0_ * 8U);
            if(not _subspan0_){
                return -_subspan0_.error();
            }
            NUNAVUT_ASSERT(_subspan0_->offset_alings_to_byte());
            auto _err0_ = servers.serialize(_subspan0_.value());
            if (not _err0_)
            {
                return _err0_;
            }
            _size_bytes0_ = _err0_.value();
            // It is assumed that we know the exact type of the serialized entity, hence we expect the size to match.
            NUNAVUT_ASSERT((_size_bytes0_ * 8U) == 512ULL);
            // Jump back to write the delimiter header after the nested object is serialized and its length is known.
            const auto _result3_ = out_buffer.setUxx(_size_bytes0_, 32U);
            if(not _result3_){
                return -_result3_.error();
            }
            out_buffer.add_offset(32U);
            out_buffer.add_offset(_size_bytes0_ * 8U);
            // NUNAVUT_ASSERT(out_buffer.size() >= 0);
        }
        {
            const auto _result0_ = out_buffer.padAndMoveToAlignment(8U);
            if(not _result0_){
                return -_result0_.error();
            }
        }
        // It is assumed that we know the exact type of the serialized entity, hence we expect the size to match.
        NUNAVUT_ASSERT(out_buffer.offset() >= 128ULL);
        NUNAVUT_ASSERT(out_buffer.offset() <= 67728ULL);
        NUNAVUT_ASSERT(out_buffer.offset_alings_to_byte());
        return out_buffer.offset_bytes_ceil();
    }

    nunavut::support::SerializeResult
    deserialize(nunavut::support::const_bitspan in_buffer)
    {
        const auto capacity_bits = in_buffer.size();
        // uavcan.node.port.SubjectIDList.0.1 publishers
        NUNAVUT_ASSERT(in_buffer.offset_alings_to(8U));
        NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
        {
            std::size_t _size_bytes1_ = in_buffer.size() / 8U;
            // Delimiter header: truncated uint32
            _size_bytes1_ = in_buffer.getU32(32U);
            in_buffer.add_offset(32U);
            if ((_size_bytes1_ * 8U) > in_buffer.size())
            {
                return -nunavut::support::Error::REPRESENTATION_BAD_DELIMITER_HEADER;
            }
            const std::size_t _dh0_ = _size_bytes1_;
            NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
            {
                const auto _err1_ = publishers.deserialize(in_buffer.subspan());
                if(_err1_){
                    _size_bytes1_ = _err1_.value();
                }else{
                    return -_err1_.error();
                }
            }
            NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
            // Advance the offset by the size of the delimiter header, even if the nested deserialization routine
            // consumed fewer bytes of data. This behavior implements the implicit truncation rule for nested objects.
            in_buffer.add_offset(_dh0_ * 8U);
        }
        in_buffer.align_offset_to<8U>();
        // uavcan.node.port.SubjectIDList.0.1 subscribers
        NUNAVUT_ASSERT(in_buffer.offset_alings_to(8U));
        NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
        {
            std::size_t _size_bytes1_ = in_buffer.size() / 8U;
            // Delimiter header: truncated uint32
            _size_bytes1_ = in_buffer.getU32(32U);
            in_buffer.add_offset(32U);
            if ((_size_bytes1_ * 8U) > in_buffer.size())
            {
                return -nunavut::support::Error::REPRESENTATION_BAD_DELIMITER_HEADER;
            }
            const std::size_t _dh0_ = _size_bytes1_;
            NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
            {
                const auto _err1_ = subscribers.deserialize(in_buffer.subspan());
                if(_err1_){
                    _size_bytes1_ = _err1_.value();
                }else{
                    return -_err1_.error();
                }
            }
            NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
            // Advance the offset by the size of the delimiter header, even if the nested deserialization routine
            // consumed fewer bytes of data. This behavior implements the implicit truncation rule for nested objects.
            in_buffer.add_offset(_dh0_ * 8U);
        }
        in_buffer.align_offset_to<8U>();
        // uavcan.node.port.ServiceIDList.0.1 clients
        NUNAVUT_ASSERT(in_buffer.offset_alings_to(8U));
        NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
        {
            std::size_t _size_bytes1_ = in_buffer.size() / 8U;
            // Delimiter header: truncated uint32
            _size_bytes1_ = in_buffer.getU32(32U);
            in_buffer.add_offset(32U);
            if ((_size_bytes1_ * 8U) > in_buffer.size())
            {
                return -nunavut::support::Error::REPRESENTATION_BAD_DELIMITER_HEADER;
            }
            const std::size_t _dh0_ = _size_bytes1_;
            NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
            {
                const auto _err1_ = clients.deserialize(in_buffer.subspan());
                if(_err1_){
                    _size_bytes1_ = _err1_.value();
                }else{
                    return -_err1_.error();
                }
            }
            NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
            // Advance the offset by the size of the delimiter header, even if the nested deserialization routine
            // consumed fewer bytes of data. This behavior implements the implicit truncation rule for nested objects.
            in_buffer.add_offset(_dh0_ * 8U);
        }
        in_buffer.align_offset_to<8U>();
        // uavcan.node.port.ServiceIDList.0.1 servers
        NUNAVUT_ASSERT(in_buffer.offset_alings_to(8U));
        NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
        {
            std::size_t _size_bytes1_ = in_buffer.size() / 8U;
            // Delimiter header: truncated uint32
            _size_bytes1_ = in_buffer.getU32(32U);
            in_buffer.add_offset(32U);
            if ((_size_bytes1_ * 8U) > in_buffer.size())
            {
                return -nunavut::support::Error::REPRESENTATION_BAD_DELIMITER_HEADER;
            }
            const std::size_t _dh0_ = _size_bytes1_;
            NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
            {
                const auto _err1_ = servers.deserialize(in_buffer.subspan());
                if(_err1_){
                    _size_bytes1_ = _err1_.value();
                }else{
                    return -_err1_.error();
                }
            }
            NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
            // Advance the offset by the size of the delimiter header, even if the nested deserialization routine
            // consumed fewer bytes of data. This behavior implements the implicit truncation rule for nested objects.
            in_buffer.add_offset(_dh0_ * 8U);
        }
        in_buffer.align_offset_to<8U>();
        NUNAVUT_ASSERT(in_buffer.offset_alings_to_byte());
        auto _bits_got_ = std::min<std::size_t>(in_buffer.offset(), capacity_bits);
        NUNAVUT_ASSERT(capacity_bits >= _bits_got_);
        return { static_cast<std::size_t>(_bits_got_ / 8U) };
    }
};

} // namespace port
} // namespace node
} // namespace uavcan

#endif // UAVCAN_NODE_PORT_LIST_0_1_HPP_INCLUDED
