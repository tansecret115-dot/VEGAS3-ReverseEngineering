/* Module: erv13260.dll
   Function: FUN_635f6770
   Address: 635f6770
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f6770(int *param_1,int param_2,int param_3,FILE *param_4)

{
  fprintf(param_4,s___intra____d_636063b0,param_1[0xb] / param_2);
  fprintf(param_4,s___inter____d_636063a0,param_1[9] / param_2);
  fprintf(param_4,s___inter4v____d_63606390,param_1[10] / param_2);
  fprintf(param_4,s___noCode____d_63606380,param_1[0xc] / param_2);
  fprintf(param_4,s________________63606274);
  fprintf(param_4,s_Coeff_Y___d_63606370,*param_1 / param_3);
  fprintf(param_4,s_Coeff_C___d_63606360,param_1[1] / param_3);
  fprintf(param_4,s_Vectors___d_63606350,param_1[2] / param_3);
  fprintf(param_4,s_CBPY____d_63606340,param_1[3] / param_3);
  fprintf(param_4,s_MCBPC____d_63606330,param_1[4] / param_3);
  fprintf(param_4,s_COD____d_63606320,param_1[5] / param_3);
  fprintf(param_4,s_DQUANT____d_63606310,param_1[7] / param_3);
  fprintf(param_4,s_header____d_63606300,param_1[6] / param_3);
  fprintf(param_4,s________________636062f0);
  fprintf(param_4,s_Total____d_636062e0,param_1[8] / param_3);
  fprintf(param_4,&DAT_636062dc);
  return;
}


