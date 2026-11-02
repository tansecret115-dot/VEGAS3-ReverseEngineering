/* Module: oggplug.dll
   Function: FUN_004321d0
   Address: 004321d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004321d0(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,int param_5,
            int param_6)

{
  FILE *_File;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  int local_64;
  char local_58 [84];
  
  sprintf(local_58,s__s__d_m_00451164,param_1);
  _File = fopen(local_58,&DAT_00451160);
  if (_File == (FILE *)0x0) {
    perror(s_failed_to_open_data_dump_file_00451140);
  }
  local_64 = 0;
  if (0 < param_4) {
    do {
      if ((param_6 == 0) || (*param_3 != _DAT_0044d6f0)) {
        if (param_5 == 0) {
          dVar4 = (double)local_64;
        }
        else {
          fVar1 = ((float10)local_64 * (float10)_DAT_0044d6ec) / (float10)param_4;
          fVar2 = (float10)fpatan(fVar1 * fVar1 * (float10)_DAT_0044d6e8,(float10)1);
          fVar3 = (float10)fpatan(fVar1 * (float10)_DAT_0044d6d8,(float10)1);
          dVar4 = (double)(fVar1 * (float10)_DAT_0044d6c8 +
                          fVar3 * (float10)_DAT_0044d6d0 + fVar2 * (float10)_DAT_0044d6e0);
        }
        fprintf(_File,&DAT_00451138,dVar4);
        if (param_6 == 0) {
          dVar4 = (double)*param_3;
        }
        else if (*param_3 == _DAT_0044d6f0) {
          dVar4 = -400.0;
        }
        else {
          fVar1 = (float10)log2((float10)*param_3 * (float10)*param_3);
          dVar4 = (double)((float10)0.6931471805599453 * fVar1 * (float10)_DAT_0044d6c0);
        }
        fprintf(_File,&DAT_00451134,dVar4);
      }
      else {
        fprintf(_File,&DAT_0045113c);
      }
      local_64 = local_64 + 1;
      param_3 = param_3 + 1;
    } while (local_64 < param_4);
  }
  fclose(_File);
  return;
}


