#ifndef DENSE_MAPPING_DENSE_MAPPING_GFLAGS_H_
#define DENSE_MAPPING_DENSE_MAPPING_GFLAGS_H_

#include <gflags/gflags.h>
#include <glog/logging.h>
#include <vi-map/vi-map.h>

// CANDIDATE SEARCH
DECLARE_string(dm_resource_types);
DECLARE_double(dm_candidate_search_min_vertex_mission_distance);

DECLARE_bool(dm_candidate_search_enable_intra_mission_consecutive);
DECLARE_double(dm_candidate_search_consecutive_max_delta_time_s);
DECLARE_double(dm_candidate_search_consecutive_max_delta_position_m);
DECLARE_double(dm_candidate_search_consecutive_max_delta_rotation_deg);

DECLARE_bool(dm_candidate_search_enable_intra_mission_proximity);
DECLARE_bool(dm_candidate_search_enable_inter_mission_proximity);
DECLARE_double(dm_candidate_search_proximity_max_delta_position_m);
DECLARE_double(dm_candidate_search_proximity_max_delta_rotation_deg);
DECLARE_double(dm_candidate_search_proximity_min_distance_along_graph_m);
DECLARE_int32(dm_candidate_search_proximity_take_closest_n_candidates);

DECLARE_bool(dm_candidate_search_enable_intra_mission_global);
DECLARE_bool(dm_candidate_search_enable_inter_mission_global);
DECLARE_string(dm_candidate_search_external_global_service);
DECLARE_int32(dm_candidate_search_external_n_nearest_neighbors);
DECLARE_double(dm_candidate_search_external_min_confidence);

// CANDIDATE SELECTION
DECLARE_bool(dm_candidate_selection_recompute_all_constraints);
DECLARE_bool(dm_candidate_selection_recompute_invalid_constraints);
DECLARE_double(dm_candidate_selection_min_switch_variable_value);
DECLARE_int32(dm_candidate_selection_max_number_of_candidates);
DECLARE_string(dm_candidate_selection_filter_strategy);
DECLARE_double(dm_candidate_selection_prioritize_recent_candidates);

// ALIGNMENT
DECLARE_double(dm_candidate_alignment_max_delta_position_to_initial_guess_m);
DECLARE_double(dm_candidate_alignment_max_delta_rotation_to_initial_guess_deg);
DECLARE_string(dm_candidate_alignment_type);
DECLARE_bool(dm_candidate_alignment_use_incremental_submab_alignment);
DECLARE_double(dm_candidate_alignment_incremental_submap_length_s);
// CONSTRAINTS
DECLARE_double(dm_constraint_switch_variable_value);
DECLARE_double(dm_constraint_switch_variable_sigma);
DECLARE_double(dm_candidate_selection_min_switch_variable_value);

// VISUALIZATION
DECLARE_bool(dm_visualize_incremental_submap);

#endif  // DENSE_MAPPING_DENSE_MAPPING_GFLAGS_H_
