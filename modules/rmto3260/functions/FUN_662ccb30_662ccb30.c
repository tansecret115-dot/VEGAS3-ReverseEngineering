/* Module: rmto3260.dll
   Function: FUN_662ccb30
   Address: 662ccb30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662ccb30(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_1c [3];
  undefined1 local_10 [4];
  int local_c;
  undefined1 local_8 [4];
  
  FUN_662e2a70(local_1c);
  iVar1 = (**(code **)(*param_1 + 0x18))(0,local_10);
  if (iVar1 == 0) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x10))(local_1c,local_8);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_662f0810(*(int **)(local_c + 0x28),s_packet__7lu__stream__1hu_timesta_6630a2f4);
      (**(code **)(*param_1 + 0x14))(iVar2);
    } while (iVar2 != 0);
  }
  return iVar1;
}


