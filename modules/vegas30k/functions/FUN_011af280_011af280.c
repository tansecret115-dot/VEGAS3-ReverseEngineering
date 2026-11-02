/* Module: vegas30k.dll
   Function: FUN_011af280
   Address: 011af280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x011af2f9) */

undefined4 __thiscall
FUN_011af280(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  int unaff_EBP;
  int *unaff_ESI;
  undefined4 *puVar3;
  int *piVar4;
  longlong lVar5;
  int *unaff_retaddr;
  int *local_c;
  uint uStack_8;
  int local_4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x674);
  bVar1 = false;
  piVar4 = (int *)0x0;
  local_4 = param_1;
  if (puVar3 != (undefined4 *)0x0) {
    do {
      (*(code *)**(undefined4 **)*puVar3)((undefined4 *)*puVar3,&DAT_011d9c90,&local_c);
      if (local_c != (int *)0x0) {
        uStack_8 = 0;
        (**(code **)(*local_c + 0x8c))(local_c,0x31,&uStack_8);
        lVar2 = CONCAT44(param_3,uStack_8);
        if (((unaff_retaddr != unaff_ESI) && (lVar2 = CONCAT44(param_3,uStack_8), unaff_EBP == 0))
           && (lVar2 = CONCAT44(param_3,uStack_8), (*(byte *)(puVar3 + 3) & 3) != 0)) {
          lVar5 = FUN_011af460();
          lVar2 = CONCAT44(param_3,uStack_8);
          if (CONCAT44(param_3,uStack_8) <= lVar5) {
            bVar1 = true;
            piVar4 = unaff_ESI;
            lVar2 = lVar5;
          }
        }
        param_3 = (undefined4)((ulonglong)lVar2 >> 0x20);
        uStack_8 = (uint)lVar2;
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      }
      puVar3 = (undefined4 *)puVar3[6];
    } while (puVar3 != (undefined4 *)0x0);
    if (bVar1) {
      (**(code **)(*piVar4 + 0x1a8))(1);
      param_2 = 0xffffffff;
      param_3 = 0xffffffff;
    }
  }
  for (puVar3 = *(undefined4 **)(local_4 + 0x674); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)puVar3[6]) {
    (*(code *)**(undefined4 **)*puVar3)((undefined4 *)*puVar3,&DAT_011d9c90,&local_c);
    if (local_c != (int *)0x0) {
      param_4 = 0;
      (**(code **)(*local_c + 0x8c))(local_c,0x31,&param_4);
      if ((unaff_retaddr == (int *)0x0) && ((*(byte *)(puVar3 + 3) & 3) != 0)) {
        FUN_011af410(param_2,param_3);
      }
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
  }
  return 0;
}


