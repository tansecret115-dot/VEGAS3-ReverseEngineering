/* Module: vegas30k.dll
   Function: FUN_011ad820
   Address: 011ad820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011ad820(int param_1)

{
  int iVar1;
  uint unaff_ESI;
  int *piVar2;
  int *local_8;
  int iStack_4;
  
  iVar1 = *(int *)(param_1 + 0x674);
  *(int *)(param_1 + 0x688) = iVar1;
  do {
    if (iVar1 == 0) {
LAB_011ad8b0:
      if (*(int *)(param_1 + 0x688) == 0) {
        iVar1 = *(int *)(param_1 + 0x68c);
        *(int *)(param_1 + 0x688) = iVar1;
        while ((iVar1 != 0 && ((*(byte *)(*(int *)(param_1 + 0x688) + 0xc) & 0x10) == 0))) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x688) + 0x18);
          *(int *)(param_1 + 0x688) = iVar1;
        }
      }
      return 0;
    }
    (*(code *)**(undefined4 **)**(undefined4 **)(param_1 + 0x688))
              ((undefined4 *)**(undefined4 **)(param_1 + 0x688),&DAT_011d9c90,&local_8);
    if (local_8 != (int *)0x0) {
      piVar2 = &iStack_4;
      iStack_4 = 0;
      (**(code **)(*local_8 + 0x8c))(local_8,0xf);
      if ((((unaff_ESI & 0x80) != 0) && ((unaff_ESI & 1) != 0)) &&
         ((*(byte *)(*(int *)(param_1 + 0x688) + 0xc) & 0x10) != 0)) {
        (**(code **)(*piVar2 + 8))(piVar2);
        goto LAB_011ad8b0;
      }
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x688) + 0x18);
    *(int *)(param_1 + 0x688) = iVar1;
  } while( true );
}


