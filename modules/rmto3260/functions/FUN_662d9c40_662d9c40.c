/* Module: rmto3260.dll
   Function: FUN_662d9c40
   Address: 662d9c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662d9c40(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)((int)param_1 + 0xb2) = 1;
  FUN_66301f30(0,s_Id___lu_CReInterleaver__DoneWrit_6630b0f8);
  if ((*(int *)((int)param_1 + 0xae) != 0) && (*(ushort *)((int)param_1 + 0x74) != 0)) {
    iVar2 = FUN_662d9ca0(param_1,(uint)*(ushort *)((int)param_1 + 0x6c) -
                                 (uint)*(ushort *)((int)param_1 + 0x74));
  }
  iVar1 = -0x7ffbfff7;
  if (*(short *)((int)param_1 + 0x74) == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}


