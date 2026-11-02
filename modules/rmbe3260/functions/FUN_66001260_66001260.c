/* Module: rmbe3260.dll
   Function: FUN_66001260
   Address: 66001260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66001260(CPNRouter *param_1)

{
  CPNPopupList *this;
  int *piVar1;
  int iVar2;
  CPNRouter *pCVar3;
  uint uVar4;
  undefined1 local_108 [256];
  int *local_8;
  
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xe4);
  this = operator_new(0xc4);
  if (this == (CPNPopupList *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)CPNPopupList::CPNPopupList(this);
  }
  *(int **)(param_1 + 0x108) = piVar1;
  if ((*(int *)(param_1 + 0x110) != 0) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0xb8))(0x41b,param_1);
    uVar4 = 0;
    do {
      if (uVar4 != 4) {
        local_8 = (int *)0x0;
        iVar2 = (**(code **)(**(int **)(param_1 + 0x104) + 0xc))
                          (*(int **)(param_1 + 0x104),uVar4,&local_8);
        if (-1 < iVar2) {
          (**(code **)(*local_8 + 0x18))(local_8,local_108,0xff);
          (**(code **)(**(int **)(param_1 + 0x108) + 0x148))(local_108);
          *(uint *)(param_1 + *(int *)(param_1 + 0x14e) * 4 + 0x12a) = uVar4;
          *(int *)(param_1 + 0x14e) = *(int *)(param_1 + 0x14e) + 1;
          (**(code **)(*local_8 + 8))(local_8);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 9);
    CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x108),param_1,0x80000000,2);
    iVar2 = 0;
    pCVar3 = param_1 + 0x12a;
    do {
      if (*(int *)pCVar3 == DAT_66075000) {
        (**(code **)(**(int **)(param_1 + 0x108) + 0x13c))(iVar2);
        return;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 4;
    } while (iVar2 < 9);
    (**(code **)(**(int **)(param_1 + 0x108) + 0x13c))(0);
    return;
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}


