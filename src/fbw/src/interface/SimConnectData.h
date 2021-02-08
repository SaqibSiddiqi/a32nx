/*
 * A32NX
 * Copyright (C) 2020 FlyByWire Simulations and its contributors
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <MSFS/Legacy/gauges.h>
#include <SimConnect.h>

struct SimData {
  double nz_g;
  double Theta_deg;
  double Phi_deg;
  SIMCONNECT_DATA_XYZ bodyRotationVelocity;
  SIMCONNECT_DATA_XYZ bodyRotationAcceleration;
  double bx_m_s2;
  double by_m_s2;
  double bz_m_s2;
  double Psi_magnetic_deg;
  double Psi_true_deg;
  double Psi_magnetic_track_deg;
  double eta_pos;
  double eta_trim_deg;
  double xi_pos;
  double zeta_pos;
  double zeta_trim_pos;
  double alpha_deg;
  double beta_deg;
  double beta_dot_deg_s;
  double V_ias_kn;
  double V_tas_kn;
  double V_mach;
  double V_gnd_kn;
  double H_ft;
  double H_ind_ft;
  double H_radio_ft;
  double H_dot_fpm;
  double CG_percent_MAC;
  double total_weight_kg;
  double gear_animation_pos_0;
  double gear_animation_pos_1;
  double gear_animation_pos_2;
  double flaps_handle_index;
  double spoilers_left_pos;
  double spoilers_right_pos;
  unsigned long long slew_on;
  unsigned long long autopilot_master_on;
  unsigned long long ap_fd_1_active;
  unsigned long long ap_fd_2_active;
  double ap_V_c_kn;
  double ap_H_c_ft;
  double simulationTime;
  double simulation_rate;
  double ice_structure_percent;
  double linear_cl_alpha_per_deg;
  double alpha_stall_deg;
  double alpha_zero_lift_deg;
  double ambient_density_kg_per_m3;
  double ambient_pressure_mbar;
  double ambient_temperature_celsius;
  double ambient_wind_x_kn;
  double ambient_wind_y_kn;
  double ambient_wind_z_kn;
  double ambient_wind_velocity_kn;
  double ambient_wind_direction_deg;
  double total_air_temperature_celsius;
  double latitude_deg;
  double longitude_deg;
  double throttle_lever_1_pos;
  double throttle_lever_2_pos;
  double engine_1_thrust_lbf;
  double engine_2_thrust_lbf;
  unsigned long long nav_valid;
  double nav_loc_deg;
  double nav_dme_valid;
  double nav_dme_nmi;
  double nav_loc_valid;
  double nav_loc_error_deg;
  double nav_gs_valid;
  double nav_gs_error_deg;
  unsigned long long isAutoThrottleActive;
  double engine_n1_1;
  double engine_n1_2;
  unsigned long long gpsIsFlightPlanActive;
  double gpsWpCrossTrack;
  double gpsWpTrackAngleError;
};

struct SimInput {
  double inputs[3];
};

struct SimInputAutopilot {
  double AP_1_push;
  double AP_2_push;
  double AP_disconnect;
  double HDG_push;
  double HDG_pull;
  double ALT_push;
  double ALT_pull;
  double VS_push;
  double VS_pull;
  double LOC_push;
  double APPR_push;
};

struct SimInputThrottles {
  double throttles[2];
};

struct SimOutput {
  double eta;
  double xi;
  double zeta;
};

struct SimOutputEtaTrim {
  double eta_trim_deg;
};

struct SimOutputZetaTrim {
  double zeta_trim_pos;
};

struct SimOutputThrottles {
  double throttleLeverPosition_1;
  double throttleLeverPosition_2;
};

struct SimOutputEngineOverride {
  double engine_n1_1;
  double engine_n1_2;
};

struct ClientDataAutopilotStateMachine {
  unsigned long long enabled_AP1;
  unsigned long long enabled_AP2;
  double lateral_law;
  double lateral_mode;
  double lateral_mode_armed;
  double vertical_law;
  double vertical_mode;
  double vertical_mode_armed;
  double mode_reversion;
  double mode_reversion_TRK_FPA;
  double autothrust_mode;
  double Psi_c_deg;
  double H_c_ft;
  double H_dot_c_fpm;
  double FPA_c_deg;
  double V_c_kn;
  double ALT_soft_mode_active;
};

struct ClientDataAutopilotLaws {
  unsigned long long enableAutopilot;
  double flightDirectorTheta;
  double autopilotTheta;
  double flightDirectorPhi;
  double autopilotPhi;
  double autopilotBeta;
};

struct ClientDataLocalVariables {
  double flightPhase;
  double V2;
  double V_APP;
  double V_LS;
  double flightPlanAvailable;
  double altitudeConstraint;
  double thrustReductionAltitude;
  double thrustReductionAltitudeGoAround;
  double accelerationAltitude;
  double accelerationAltitudeEngineOut;
  double accelerationAltitudeGoAround;
  double cruiseAltitude;
  double directToTrigger;
  double fcuTrkFpaModeActive;
  double fcuSelectedVs;
  double fcuSelectedFpa;
  double fcuSelectedHeading;
  double crossTrackError;
  double trackAngleError;
};