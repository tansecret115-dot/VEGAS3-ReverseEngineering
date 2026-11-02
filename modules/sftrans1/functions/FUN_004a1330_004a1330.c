/* Module: sftrans1.dll
   Function: FUN_004a1330
   Address: 004a1330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a1330(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int *unaff_ESI;
  
  iVar5 = (int)param_1;
  puVar1 = (undefined4 *)**(int **)((int)param_1 + 8);
  param_1 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,&param_1);
  }
  if (*(int *)(iVar5 + 0x74) != 0) {
    pfVar6 = (float *)(iVar5 + 0x78);
    iVar7 = 9;
    fVar3 = _DAT_00557840;
    do {
      fVar3 = fVar3 + *pfVar6;
      pfVar6 = pfVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if ((fVar3 < _DAT_005648d0) || (_DAT_0055d914 < fVar3)) {
      fVar3 = _DAT_0055c008 / fVar3;
      bVar2 = _DAT_005648cc <= fVar3;
      *(float *)(iVar5 + 0x68) = fVar3;
      fVar4 = _DAT_005648cc;
      if ((bVar2) && (fVar4 = fVar3, _DAT_00561370 < fVar3)) {
        fVar4 = _DAT_00561370;
      }
      *(float *)(iVar5 + 0x68) = fVar4;
    }
    else {
      *(undefined4 *)(iVar5 + 0x68) = 0x3f800000;
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1,iVar5 + 0x68);
  *(undefined4 *)(iVar5 + 0x28) = 0;
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return 0;
}


