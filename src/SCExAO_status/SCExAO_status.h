#ifndef _SCExAO_status
#define _SCExAO_status


typedef struct {
  
  // DOFs
  char src_fib_st[16];
  int src_fib_co;
  float src_fib_x;
  float src_fib_y;
  char oap1_st[16];
  int oap1_co;
  float oap1_theta;
  float oap1_phi;
  int oap1_f;
  char dichroic_st[16];
  int dichroic_co;
  float dichroic;
  char pupil_st[16];
  int pupil_co;
  float pupil_wheel;
  int pupil_x;
  int pupil_y;
  char piaa1_st[16];
  int piaa1_co;
  float piaa1_wheel;
  int piaa1_x;
  int piaa1_y;
  char piaa2_st[16];
  int piaa2_co;
  float piaa2_wheel;
  int piaa2_x;
  int piaa2_y;
  int piaa2_f;
  char nuller_pickoff_st[16];
  int nuller_pickoff_co;
  float nuller_pickoff;
  char PG1_pickoff[16];
  int PG1_pickoff_co;
  char fpm_st[16];
  int fpm_co;
  float fpm_wheel;
  int fpm_x;
  int fpm_y;
  int fpm_f;
  char lyot_st[16];
  int lyot_co;
  float lyot_wheel;
  int lyot_x;
  int lyot_y;
  char invpiaa_st[16];
  int invpiaa_co;
  float invpiaa_x;
  float invpiaa_y;
  int invpiaa_theta;
  int invpiaa_phi;
  char oap4_st[16];
  int oap4_co;
  float oap4_theta;
  float oap4_phi;
  char intsphere[16];
  int intsphere_co;
  char charis_pickoff_st[16];
  int charis_pickoff_co;
  float charis_pickoff;
  char mkids_pickoff_st[16];
  int mkids_pickoff_co;
  float mkids_pickoff;
  char ircam_filter[16];
  int ircam_filter_co;
  char ircam_block[16];
  int ircam_block_co;
  char pcfi_pickoff_st[16];
  int pcfi_pickoff_co;
  float pcfi_pickoff;
  char ircam_fcs_st[16];
  int ircam_fcs_co;
  int ircam_fcs_f1;
  float ircam_fcs_f2;
  char saphira_pickoff_st[16];
  int saphira_pickoff_co;
  float saphira_pickoff;
  char chuck_pup[16];
  int chuck_pup_co;
  char chuck_pup_fcs_st[16];
  int chuck_pup_fcs_co;
  float chuck_pup_fcs;
  char saphira_pup[16];
  int saphira_pup_co;
  char fibinj_pickoff_st[16];
  int fibinj_pickoff_co;
  float fibinj_pickoff;
  char fibinj_fib_st[16];
  int fibinj_fib_co;
  int fibinj_fib_x;
  int fibinj_fib_y;
  int fibinj_fib_f;
  int fibinj_car;
  char PG2_pickoff[16];
  int PG2_pickoff_co;
  char lowfs_block[16];
  int lowfs_block_co;
  int lowfs_fcs;
  char pcfi_len_st[16];
  int pcfi_len_co;
  float pcfi_len;
  char pcfi_fib_st[16];
  int pcfi_fib_co;
  float pcfi_fib_x;
  float pcfi_fib_y;
  float pcfi_fib_f;
  char polarizer_st[16];
  int polarizer_co;
  float polarizer;
  char pywfs_pickoff_st[16];
  int pywfs_pickoff_co;
  float pywfs_pickoff;
  char pywfs_filter[16];
  int pywfs_filter_co;
  int pywfs_col;
  int pywfs_fcs;
  int pywfs_pup_x;
  int pywfs_pup_y;
  char first_pickoff_st[16];
  int first_pickoff_co;
  float first_pickoff;
  char rhea_pickoff_st[16];
  int rhea_pickoff_co;
  float rhea_pickoff;
  char first_photometry_x1_st[16];
  int first_photometry_x1_co;
  float first_photometry_x1;
  char first_photometry_x2_st[16];
  int first_photometry_x2_co;
  float first_photometry_x2;
  char src_select_st[16];
  int src_select_co;
  float src_select;
  char src_flux_irnd[16];
  char src_flux_optnd[16];
  char src_flux_filter[16];

  // WFS
  char pywfs_loop[16];
  int pywfs_loop_co;
  char pywfs_cal[16];
  int pywfs_cal_co;
  int pywfs_freq;
  float pywfs_gain;
  float pywfs_leak;
  float pywfs_rad;
  char pywfs_puploop[16];
  int pywfs_puploop_co;
  char pywfs_cenloop[16];
  int pywfs_cenloop_co;
  char dmoffload[16];
  int dmoffload_co;
  char lowfs_loop[16];
  int lowfs_loop_co;
  int lowfs_freq;
  int lowfs_nmodes;
  char lowfs_mtype[16];
  float lowfs_gain;
  float lowfs_leak;
  char sn_loop[16];
  int sn_loop_co;
  int sn_freq;
  float sn_gain;
  char zap_loop[16];
  int zap_loop_co;
  int zap_freq;
  float zap_gain;
  int zap_nmodes;
  char zap_mtype[16];
  
  // LOGGING STATUS
  char logchuck[16];
  int logchuck_co;
  char darkchuck[16];
  int darkchuck_co;
  char hotspot[16];
  int hotspot_co;
  
  //ASTROGRID
  char grid_st[16];
  int grid_st_co;
  float grid_sep;
  float grid_amp;
  int grid_mod;

  //NPS
  char nps1_1[16];
  int nps1_1_co;
  char nps1_2[16];
  int nps1_2_co;
  char nps1_3[16];
  int nps1_3_co;
  char nps1_4[16];
  int nps1_4_co;
  char nps1_5[16];
  int nps1_5_co;
  char nps1_6[16];
  int nps1_6_co;
  char nps1_7[16];
  int nps1_7_co;
  char nps1_8[16];
  int nps1_8_co;
  char nps2_1[16];
  int nps2_1_co;
  char nps2_2[16];
  int nps2_2_co;
  char nps2_3[16];
  int nps2_3_co;
  char nps2_4[16];
  int nps2_4_co;
  char nps2_5[16];
  int nps2_5_co;
  char nps2_6[16];
  int nps2_6_co;
  char nps2_7[16];
  int nps2_7_co;
  char nps2_8[16];
  int nps2_8_co;
  char nps3_1[16];
  int nps3_1_co;
  char nps3_2[16];
  int nps3_2_co;
  char nps3_3[16];
  int nps3_3_co;
  char nps3_4[16];
  int nps3_4_co;
  char nps3_5[16];
  int nps3_5_co;
  char nps3_6[16];
  int nps3_6_co;
  char nps3_7[16];
  int nps3_7_co;
  char nps3_8[16];
  int nps3_8_co;

} SCEXAOSTATUS;

#endif
