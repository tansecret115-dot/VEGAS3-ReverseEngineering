/* Module: rmbe3260.dll
   Function: FUN_6604ef70
   Address: 6604ef70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6604ef70(void *this,char *param_1,undefined4 param_2)

{
  LSTATUS LVar1;
  FILE *_File;
  LARGE_INTEGER local_10;
  HKEY local_8;
  
  *(undefined4 *)((int)this + 8) = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,s_Software_RealNetworks_RealProduc_6606ef24,0,8,&local_8);
  *(uint *)((int)this + 4) = (uint)(LVar1 == 0);
  RegCloseKey(local_8);
  if (*(int *)((int)this + 4) != 0) {
    _File = fopen(param_1,&DAT_6606ef20);
    *(FILE **)this = _File;
    fprintf(_File,&DAT_6606ef18,param_2);
    QueryPerformanceFrequency(&local_10);
    fprintf(*(FILE **)this,s_Timer_Frequency___I64d_ticks_per_6606eeec,local_10.s.LowPart,
            local_10.s.HighPart);
    fprintf(*(FILE **)this,s_Operation_Start_End_6606eed4);
    fflush(*(FILE **)this);
  }
  return this;
}


