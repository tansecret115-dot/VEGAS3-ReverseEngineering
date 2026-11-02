/* Module: rmbe3260.dll
   Function: FUN_66005300
   Address: 66005300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66005300(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x110) != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x108) + 0x134))();
    piVar1 = *(int **)(param_1 + 0x110);
    if (iVar2 == 1) {
      (**(code **)(*piVar1 + 0x18))(piVar1,&DAT_6606c29c);
      return 1;
    }
    (**(code **)(*piVar1 + 0x18))(piVar1,s_x_real_rdt_udp_6606c2ac);
  }
  return 1;
}


