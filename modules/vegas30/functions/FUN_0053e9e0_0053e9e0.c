/* Module: vegas30.exe
   Function: FUN_0053e9e0
   Address: 0053e9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053e9e0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0xe98);
  *param_1 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0x8007000e;
  }
  FUN_004590f0(pvVar1,param_2);
  FUN_004a4020(pvVar1,DAT_006476c8,DAT_006476cc);
  *(uint *)((int)pvVar1 + 0xabc) = *(uint *)((int)pvVar1 + 0xabc) | 0x4000000;
  *(undefined4 *)((int)pvVar1 + 0x5dc) = 2;
  *(undefined **)((int)pvVar1 + 0x5d8) = &DAT_0063e138;
  *(undefined4 *)((int)pvVar1 + 0x654) = 0x1a0;
  *(undefined **)((int)pvVar1 + 0x650) = &DAT_0063e188;
  *(undefined4 *)((int)pvVar1 + 0xc44) = 0;
  *(undefined4 *)((int)pvVar1 + 0xc48) = 0;
  *(undefined ***)((int)pvVar1 + 0x364) = &PTR_LAB_00644c28;
  *(undefined ***)((int)pvVar1 + 0x810) = &PTR_LAB_0063e248;
  *(uint *)((int)pvVar1 + 0x814) = *(uint *)((int)pvVar1 + 0x814) | 6;
  *(undefined4 *)((int)pvVar1 + 0x404) = 0x68;
  *(undefined **)((int)pvVar1 + 0x6c0) = &DAT_0063df90;
  *(undefined4 *)((int)pvVar1 + 0x76c) = 0x11;
  *(undefined ***)((int)pvVar1 + 0xae0) = &PTR_LAB_00644ba0;
  *(undefined4 *)((int)pvVar1 + 0xadc) = 0;
  *(undefined4 *)((int)pvVar1 + 0xab8) = *(undefined4 *)((int)pvVar1 + 0xae0);
  *(undefined4 *)((int)pvVar1 + 0x608) = 1;
  *(undefined4 *)((int)pvVar1 + 0xb9c) = 0x10;
  *(undefined4 *)((int)pvVar1 + 0xbb0) = 1;
  *(undefined4 *)((int)pvVar1 + 0xb98) = 1;
  *(undefined ***)((int)pvVar1 + 0xab0) = &PTR_LAB_00644bc8;
  *(undefined ***)((int)pvVar1 + 0xab4) = &PTR_LAB_00644be8;
  return 0;
}


