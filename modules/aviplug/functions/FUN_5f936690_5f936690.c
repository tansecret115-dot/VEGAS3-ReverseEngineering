/* Module: aviplug.dll
   Function: FUN_5f936690
   Address: 5f936690
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f936690(void *param_1)

{
  int iVar1;
  void *this;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  int iVar6;
  int *unaff_EBP;
  undefined4 uVar7;
  int *piVar8;
  
  this = param_1;
  iVar6 = -0x7ff8fff2;
  if (*(int *)((int)param_1 + 0x1c) == 0) {
    return -0x7fffbffb;
  }
  puVar2 = FUN_5f936c60((int)param_1);
  if (puVar2 != (undefined *)0x0) {
    param_1 = (void *)0x0;
    piVar8 = (int *)&DAT_5f9d9d60;
    iVar6 = (**(code **)**(undefined4 **)((int)this + 0x1c))
                      (*(undefined4 **)((int)this + 0x1c),&DAT_5f9d9d60,&param_1);
    if (-1 < iVar6) {
      iVar6 = (**(code **)(*unaff_EBP + 0x18))(unaff_EBP,puVar2,unaff_EBX,DAT_5f9f103c);
      if (-1 < iVar6) {
        iVar6 = FUN_5f9367d0((int)puVar2,piVar8);
      }
      (**(code **)(*piVar8 + 8))(piVar8);
      if (-1 < iVar6) {
        *(undefined4 *)((int)this + 0x28) = 0;
        FUN_5f936cb0(this,*(int *)((int)this + 0x24));
        *(undefined **)((int)this + 0x24) = puVar2;
        uVar5 = 0x78;
        uVar7 = 0xa0;
        if (((*(int *)((int)this + 0x2c) != 0) &&
            (piVar8 = *(int **)(*(int *)((int)this + 0x2c) + 0x428), piVar8 != (int *)0x0)) &&
           ((iVar3 = piVar8[0x12], iVar3 != 0 || (iVar3 = *piVar8, iVar3 != 0)))) {
          uVar5 = *(undefined4 *)(iVar3 + 8);
          uVar7 = *(undefined4 *)(iVar3 + 4);
        }
        piVar8 = *(int **)(puVar2 + 0x428);
        if (piVar8 == (int *)0x0) {
          return iVar6;
        }
        iVar3 = piVar8[0x12];
        if (iVar3 == 0) {
          return iVar6;
        }
        iVar1 = *piVar8;
        if (iVar1 == 0) {
          return iVar6;
        }
        if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 4) != 0)) {
          return iVar6;
        }
        if (*(int *)(iVar3 + 8) == 0) {
          *(undefined4 *)(iVar3 + 8) = uVar5;
        }
        if (*(int *)(iVar3 + 4) == 0) {
          *(undefined4 *)(iVar3 + 4) = uVar7;
        }
        uVar4 = (uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f;
        *(int *)(iVar3 + 0x14) =
             ((int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3) * *(int *)(iVar3 + 8);
        return iVar6;
      }
    }
    FUN_5f936cb0(this,(int)puVar2);
  }
  return iVar6;
}


