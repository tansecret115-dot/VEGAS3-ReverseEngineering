/* Module: vidcap30.exe
   Function: thunk_FUN_00416b30
   Address: 00416c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void thunk_FUN_00416b30(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_164;
  undefined4 uStack_15c;
  undefined1 uStack_154;
  undefined4 uStack_153;
  
  iVar1 = DAT_005bb808;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
  iVar3 = *(int *)(iVar1 + 0x6c);
  if (((iVar3 == 0) && (*(int *)(iVar1 + 0x48) == 0)) && (*(int *)(iVar1 + 0x60) == 0)) {
    uStack_15c = *(undefined4 *)(iVar1 + 0x70);
    iVar6 = *(int *)(iVar1 + 0x74);
    uStack_164 = *(undefined4 *)(iVar1 + 0x78);
    bVar2 = false;
    iVar7 = iVar6;
  }
  else {
    uStack_15c = *(undefined4 *)(iVar1 + 0x70);
    uStack_164 = *(undefined4 *)(iVar1 + 0x50);
    iVar6 = *(int *)(iVar1 + 0x48);
    iVar7 = *(int *)(iVar1 + 0x4c);
    bVar2 = true;
  }
  iVar1 = *(int *)(iVar1 + 0x7c);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005bc208);
  uStack_154 = DAT_00586c70;
  puVar8 = &uStack_153;
  for (iVar5 = 0x54; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  if (bVar2) {
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0x24))(iVar3,&uStack_154,0x154);
    }
    FUN_00410f30(1,&uStack_154);
    FUN_00411000(uStack_15c,iVar7,iVar6);
    return;
  }
  iVar3 = FUN_00411110();
  if (iVar3 != 0) {
    if (iVar7 != 0) {
      uVar4 = 0xa6;
      if (iVar1 == -0x7ffb1ff4) {
        uVar4 = 0xa5;
      }
      else if (iVar1 < 0) {
        uVar4 = 0xa7;
      }
      uVar4 = _SfGetString_8(DAT_005ba2a0,uVar4);
      SfPrintF(&uStack_154,uVar4,uStack_164);
    }
    FUN_00410f30(0,&uStack_154);
  }
  FUN_00416ad0();
  return;
}


