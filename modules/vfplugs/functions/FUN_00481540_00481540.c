/* Module: vfplugs.dll
   Function: FUN_00481540
   Address: 00481540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481540(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint local_18 [3];
  uint local_c [3];
  
  FUN_0047cae0((int)param_2,local_18);
  FUN_0047cac0(local_c);
  iVar1 = (int)local_c - (int)param_2;
  iVar2 = 3;
  do {
    *(uint *)(iVar1 + (int)param_2) = param_2[3] ^ *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_004812a0(param_1,local_18,param_3,param_4);
  return;
}


