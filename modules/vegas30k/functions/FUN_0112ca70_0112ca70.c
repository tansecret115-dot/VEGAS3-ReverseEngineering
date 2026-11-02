/* Module: vegas30k.dll
   Function: FUN_0112ca70
   Address: 0112ca70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0112ca70(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  if (((param_3 == (char *)0x0) || (*param_3 != s_1_1_3_011db6d8[0])) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = FUN_01161200;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined1 **)(param_1 + 0x24) = &LAB_01161220;
  }
  iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x18);
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    return 0xfffffffc;
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 0;
  if (unaff_ESI < 0) {
    unaff_ESI = -unaff_ESI;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 1;
  }
  if ((7 < unaff_ESI) && (unaff_ESI < 0x10)) {
    *(int *)(*(int *)(param_1 + 0x1c) + 0x10) = unaff_ESI;
    uVar2 = FUN_01160290(param_1,~-(uint)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 0) & 0x1161090
                         ,1 << ((byte)unaff_ESI & 0x1f));
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14) = uVar2;
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x14) == 0) {
      FUN_0112ca20(param_1);
      return 0xfffffffc;
    }
    FUN_0112c9d0(param_1);
    return 0;
  }
  FUN_0112ca20(param_1);
  return 0xfffffffe;
}


