/* Module: tokr3260.dll
   Function: FUN_68051ee0
   Address: 68051ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68051ee0(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  FUN_68053d40(param_1,&local_c,&local_14);
  FUN_68053d40(param_2,&local_8,&local_10);
  iVar4 = 0;
  pfVar3 = param_4;
  do {
    fVar5 = FUN_68053d00(local_c,local_8,iVar4);
    fVar6 = FUN_68053d00(local_14,local_10,iVar4);
    fVar1 = *(float *)((param_3 - (int)param_4) + (int)pfVar3);
    fVar2 = (float)fVar5 * fVar1 + *pfVar3 * (float)fVar6;
    iVar4 = iVar4 + 1;
    *(float *)((param_3 - (int)param_4) + -4 + (int)(pfVar3 + 1)) = fVar2;
    *pfVar3 = (fVar1 + fVar1) - fVar2;
    pfVar3 = pfVar3 + 1;
  } while (iVar4 < 0x100);
  return 0;
}


