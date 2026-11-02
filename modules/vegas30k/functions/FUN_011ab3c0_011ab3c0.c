/* Module: vegas30k.dll
   Function: FUN_011ab3c0
   Address: 011ab3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011ab3c0(int *param_1,int param_2,int *param_3)

{
  uint unaff_EBP;
  int iVar1;
  undefined4 *puVar2;
  int *unaff_EDI;
  undefined4 uVar3;
  int *local_4;
  
  puVar2 = *(undefined4 **)(param_2 + 0x674);
  uVar3 = 0;
  iVar1 = 0;
  local_4 = param_1;
  if (puVar2 != (undefined4 *)0x0) {
    do {
      (*(code *)**(undefined4 **)*puVar2)((undefined4 *)*puVar2,&DAT_011d9c90,&local_4);
      if (local_4 != (int *)0x0) {
        param_2 = 0;
        uVar3 = (**(code **)(*local_4 + 0x8c))(local_4,0xf,&param_2);
        if (((unaff_EBP & 0x80) != 0) && ((unaff_EBP & 1) != 0)) {
          iVar1 = iVar1 + 1;
        }
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
      puVar2 = (undefined4 *)puVar2[6];
    } while (puVar2 != (undefined4 *)0x0);
    *param_3 = iVar1;
    return uVar3;
  }
  *param_3 = 0;
  return 0;
}


