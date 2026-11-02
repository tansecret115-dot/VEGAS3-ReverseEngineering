/* Module: vegas30k.dll
   Function: FUN_011adf40
   Address: 011adf40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011adf40(undefined4 param_1,int *param_2,int param_3,int *param_4)

{
  int *unaff_EBX;
  int iVar1;
  int *unaff_EBP;
  undefined4 *puVar2;
  int unaff_EDI;
  int iVar3;
  undefined4 uStack_4;
  
  puVar2 = (undefined4 *)param_2[0x19d];
  iVar3 = 0;
  *param_4 = 0;
  iVar1 = param_3;
  uStack_4 = param_1;
  if (puVar2 == (undefined4 *)0x0) {
    *param_4 = 0;
    return 0;
  }
  do {
    (*(code *)**(undefined4 **)*puVar2)((undefined4 *)*puVar2,&DAT_011d9c90,&param_2);
    if (param_2 != (int *)0x0) {
      uStack_4 = 0;
      (**(code **)(*param_2 + 0x8c))(param_2,0xf,&uStack_4);
      uStack_4 = 0;
      (**(code **)(*unaff_EBP + 0x8c))(unaff_EBP,0x31,&uStack_4);
      if ((unaff_EDI == 0) && ((*(byte *)(puVar2 + 3) & 0x10) != 0)) {
        (**(code **)(*unaff_EBX + 0x114))(unaff_EBX,iVar1);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 8;
      }
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    puVar2 = (undefined4 *)puVar2[6];
  } while (puVar2 != (undefined4 *)0x0);
  *param_4 = iVar3;
  return 0;
}


