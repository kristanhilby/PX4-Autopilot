/****************************************************************************
 *
 *   Copyright (C) 2013-2022 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/


// auto-generated file

#pragma once

#include <ucdr/microcdr.h>
#include <string.h>
#include <uORB/topics/uwb_distance.h>


static inline constexpr int ucdr_topic_size_uwb_distance()
{
	return 124;
}

bool ucdr_serialize_uwb_distance(const uwb_distance_s& topic, ucdrBuffer& buf, int64_t time_offset = 0)
{
	static_assert(sizeof(topic.timestamp) == 8, "size mismatch");
	const uint64_t timestamp_adjusted = topic.timestamp + time_offset;
	memcpy(buf.iterator, &timestamp_adjusted, sizeof(topic.timestamp));
	buf.iterator += sizeof(topic.timestamp);
	buf.offset += sizeof(topic.timestamp);
	static_assert(sizeof(topic.time_uwb_ms) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.time_uwb_ms, sizeof(topic.time_uwb_ms));
	buf.iterator += sizeof(topic.time_uwb_ms);
	buf.offset += sizeof(topic.time_uwb_ms);
	static_assert(sizeof(topic.counter) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.counter, sizeof(topic.counter));
	buf.iterator += sizeof(topic.counter);
	buf.offset += sizeof(topic.counter);
	static_assert(sizeof(topic.sessionid) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.sessionid, sizeof(topic.sessionid));
	buf.iterator += sizeof(topic.sessionid);
	buf.offset += sizeof(topic.sessionid);
	static_assert(sizeof(topic.time_offset) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.time_offset, sizeof(topic.time_offset));
	buf.iterator += sizeof(topic.time_offset);
	buf.offset += sizeof(topic.time_offset);
	static_assert(sizeof(topic.status) == 2, "size mismatch");
	memcpy(buf.iterator, &topic.status, sizeof(topic.status));
	buf.iterator += sizeof(topic.status);
	buf.offset += sizeof(topic.status);
	static_assert(sizeof(topic.anchor_distance) == 24, "size mismatch");
	memcpy(buf.iterator, &topic.anchor_distance, sizeof(topic.anchor_distance));
	buf.iterator += sizeof(topic.anchor_distance);
	buf.offset += sizeof(topic.anchor_distance);
	static_assert(sizeof(topic.nlos) == 12, "size mismatch");
	memcpy(buf.iterator, &topic.nlos, sizeof(topic.nlos));
	buf.iterator += sizeof(topic.nlos);
	buf.offset += sizeof(topic.nlos);
	buf.iterator += 2; // padding
	buf.offset += 2; // padding
	static_assert(sizeof(topic.aoafirst) == 48, "size mismatch");
	memcpy(buf.iterator, &topic.aoafirst, sizeof(topic.aoafirst));
	buf.iterator += sizeof(topic.aoafirst);
	buf.offset += sizeof(topic.aoafirst);
	static_assert(sizeof(topic.position) == 12, "size mismatch");
	memcpy(buf.iterator, &topic.position, sizeof(topic.position));
	buf.iterator += sizeof(topic.position);
	buf.offset += sizeof(topic.position);
	return true;
}

bool ucdr_deserialize_uwb_distance(ucdrBuffer& buf, uwb_distance_s& topic, int64_t time_offset = 0)
{
	static_assert(sizeof(topic.timestamp) == 8, "size mismatch");
	memcpy(&topic.timestamp, buf.iterator, sizeof(topic.timestamp));
	if (topic.timestamp == 0) topic.timestamp = hrt_absolute_time();
	else topic.timestamp = math::min(topic.timestamp - time_offset, hrt_absolute_time());
	buf.iterator += sizeof(topic.timestamp);
	buf.offset += sizeof(topic.timestamp);
	static_assert(sizeof(topic.time_uwb_ms) == 4, "size mismatch");
	memcpy(&topic.time_uwb_ms, buf.iterator, sizeof(topic.time_uwb_ms));
	buf.iterator += sizeof(topic.time_uwb_ms);
	buf.offset += sizeof(topic.time_uwb_ms);
	static_assert(sizeof(topic.counter) == 4, "size mismatch");
	memcpy(&topic.counter, buf.iterator, sizeof(topic.counter));
	buf.iterator += sizeof(topic.counter);
	buf.offset += sizeof(topic.counter);
	static_assert(sizeof(topic.sessionid) == 4, "size mismatch");
	memcpy(&topic.sessionid, buf.iterator, sizeof(topic.sessionid));
	buf.iterator += sizeof(topic.sessionid);
	buf.offset += sizeof(topic.sessionid);
	static_assert(sizeof(topic.time_offset) == 4, "size mismatch");
	memcpy(&topic.time_offset, buf.iterator, sizeof(topic.time_offset));
	buf.iterator += sizeof(topic.time_offset);
	buf.offset += sizeof(topic.time_offset);
	static_assert(sizeof(topic.status) == 2, "size mismatch");
	memcpy(&topic.status, buf.iterator, sizeof(topic.status));
	buf.iterator += sizeof(topic.status);
	buf.offset += sizeof(topic.status);
	static_assert(sizeof(topic.anchor_distance) == 24, "size mismatch");
	memcpy(&topic.anchor_distance, buf.iterator, sizeof(topic.anchor_distance));
	buf.iterator += sizeof(topic.anchor_distance);
	buf.offset += sizeof(topic.anchor_distance);
	static_assert(sizeof(topic.nlos) == 12, "size mismatch");
	memcpy(&topic.nlos, buf.iterator, sizeof(topic.nlos));
	buf.iterator += sizeof(topic.nlos);
	buf.offset += sizeof(topic.nlos);
	buf.iterator += 2; // padding
	buf.offset += 2; // padding
	static_assert(sizeof(topic.aoafirst) == 48, "size mismatch");
	memcpy(&topic.aoafirst, buf.iterator, sizeof(topic.aoafirst));
	buf.iterator += sizeof(topic.aoafirst);
	buf.offset += sizeof(topic.aoafirst);
	static_assert(sizeof(topic.position) == 12, "size mismatch");
	memcpy(&topic.position, buf.iterator, sizeof(topic.position));
	buf.iterator += sizeof(topic.position);
	buf.offset += sizeof(topic.position);
	return true;
}
