/* Module: vegas30k.dll
   Function: FUN_0119dd50
   Address: 0119dd50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0119de05) */

int __fastcall FUN_0119dd50(int *param_1)

{
  uint uVar1;
  uint unaff_EBP;
  undefined4 *puVar2;
  int *unaff_ESI;
  int iVar3;
  int *local_10;
  undefined4 uStack_c;
  int iStack_8;
  uint uStack_4;
  
  puVar2 = (undefined4 *)param_1[0x19d];
  iVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    do {
      if (iVar3 < 0) goto LAB_0119de71;
      (*(code *)**(undefined4 **)*puVar2)((undefined4 *)*puVar2,&DAT_011d9c90,&local_10);
      if (local_10 != (int *)0x0) {
        uStack_c = 0;
        (**(code **)(*local_10 + 0x8c))(local_10,0xf,&uStack_c);
        if (((unaff_EBP & 0x80) != 0) && ((unaff_EBP & 0x10) == 0)) {
          if (iStack_8 == 0) {
            iVar3 = (**(code **)(*unaff_ESI + 0xc0))
                              (unaff_ESI,(int)param_1 + 0x4be,&LAB_01195b40,param_1,0);
          }
          else {
            if ((unaff_EBP & 1) == 0) {
              if ((unaff_EBP & 4) == 0) goto LAB_0119de58;
              FUN_01188650(&local_10);
              uVar1 = 1;
              if (local_10 != (int *)0x0) {
                uVar1 = 1 << ((byte)local_10 & 0x1f);
              }
              uVar1 = uStack_4 & uVar1;
            }
            else {
              (**(code **)(*unaff_ESI + 0x8c))(unaff_ESI,0x33,&stack0xffffffec);
              uVar1 = uStack_4 & 1;
            }
            if (uVar1 != 0) {
              iVar3 = (**(code **)(*unaff_ESI + 0xc0))
                                (unaff_ESI,(int)param_1 + 0x4be,&LAB_01195b40,param_1,1);
            }
          }
        }
LAB_0119de58:
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      }
      puVar2 = (undefined4 *)puVar2[6];
    } while (puVar2 != (undefined4 *)0x0);
    if (iVar3 < 0) {
LAB_0119de71:
      (**(code **)(*param_1 + 0xf0))(param_1);
    }
  }
  return iVar3;
}


