/* Module: aviplug.dll
   Function: FUN_5f936b10
   Address: 5f936b10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f936b10(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  uint uVar4;
  ushort uVar5;
  int *piVar6;
  undefined4 local_4;
  
  local_4 = 0;
  piVar6 = (int *)&DAT_5f9d9d60;
  iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x1c))
                    (*(undefined4 **)(param_1 + 0x1c),&DAT_5f9d9d60,&local_4);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar6 + 0x14))(piVar6,unaff_EBP,local_4);
    if ((((-1 < iVar2) && (unaff_EBP != 0)) && (iVar2 = *(int *)(unaff_EBP + 0x428), iVar2 != 0)) &&
       ((*(int *)(iVar2 + 4) != 0 && (*(int *)(iVar2 + 0x94) != 0)))) {
      uVar4 = (uint)DAT_5f9f133e;
      uVar5 = DAT_5f9f133e;
      if (*(int *)(param_1 + 0x40) != 0) {
        uVar4 = 0x20;
        uVar5 = 0x20;
      }
      iVar1 = *(int *)(*(int *)(iVar2 + 0x94) + 0x14);
      if (((iVar1 == 0x6e76645f) || (iVar1 == 0x6e766477)) ||
         ((iVar1 == 0x7076645f || (iVar1 == 0x70766477)))) {
        iVar2 = *(int *)(iVar2 + 0x48);
        if ((iVar2 != 0) && ((*(int *)(param_1 + 0x40) != 0 || (*(short *)(iVar2 + 0xe) == 0x20))))
        {
          *(ushort *)(iVar2 + 0xe) = uVar5;
          uVar3 = *(int *)(iVar2 + 4) * uVar4 + 0x1f;
          *(int *)(iVar2 + 0x14) =
               ((int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3) * *(int *)(iVar2 + 8);
        }
        iVar2 = **(int **)(unaff_EBP + 0x428);
        if ((iVar2 != 0) && ((*(int *)(param_1 + 0x40) != 0 || (*(short *)(iVar2 + 0xe) == 0x20))))
        {
          uVar4 = *(int *)(iVar2 + 4) * uVar4 + 0x1f;
          *(ushort *)(iVar2 + 0xe) = uVar5;
          *(int *)(iVar2 + 0x14) =
               ((int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3) * *(int *)(iVar2 + 8);
        }
      }
    }
    iVar2 = unaff_EBX;
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return iVar2;
}


