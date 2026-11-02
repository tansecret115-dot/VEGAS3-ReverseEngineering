/* Module: vegas30.exe
   Function: FUN_0040b920
   Address: 0040b920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040b9db) */
/* WARNING: Removing unreachable block (ram,0x0040b9ec) */
/* WARNING: Removing unreachable block (ram,0x0040b9e3) */
/* WARNING: Removing unreachable block (ram,0x0040bca4) */
/* WARNING: Removing unreachable block (ram,0x0040b9aa) */
/* WARNING: Removing unreachable block (ram,0x0040ba2d) */

undefined4 __thiscall FUN_0040b920(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  LPRECT lpRect;
  int iVar3;
  HDC pHVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_EDI;
  int *piStack_60;
  undefined **ppuStack_5c;
  undefined *puStack_58;
  int *piStack_54;
  undefined *puStack_50;
  int *piStack_4c;
  undefined4 *puStack_48;
  int *piStack_44;
  undefined *puVar7;
  int *piStack_14;
  undefined4 *puStack_8;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_004066c0();
  piVar1 = param_1 + 0x15;
  (**(code **)*param_2)();
  if ((int *)*piVar1 != (int *)0x0) {
    (**(code **)(*(int *)*piVar1 + 0x58))();
    if ((param_1[0x24] & 0x20000U) != 0) {
      puStack_48 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
      if (puStack_48 != (undefined4 *)0x0) {
        piStack_44 = (int *)&DAT_0063c3f0;
        piStack_4c = (int *)0x40b995;
        (**(code **)*puStack_48)();
      }
      piStack_44 = (int *)*piVar1;
      puStack_48 = (undefined4 *)0x40b9a2;
      (**(code **)(*piStack_44 + 0xc))();
    }
    puVar6 = (undefined4 *)*piVar1;
    if (puVar6 != (undefined4 *)0x0) {
      piStack_44 = (int *)&DAT_006335c8;
      piStack_4c = (int *)0x40b9cb;
      puStack_48 = puVar6;
      (**(code **)*puVar6)();
    }
    if ((param_1[0x24] & 0x20000U) == 0) {
      puStack_48 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
      if (puStack_48 != (undefined4 *)0x0) {
        piStack_44 = (int *)&DAT_0063c3f0;
        piStack_4c = (int *)0x40ba18;
        (**(code **)*puStack_48)();
      }
      piStack_44 = (int *)*piVar1;
      puStack_48 = (undefined4 *)0x40ba25;
      (**(code **)(*piStack_44 + 0xc))();
    }
    puStack_48 = (undefined4 *)*piVar1;
    piVar2 = param_1 + 0x18;
    param_1[0x20] = 0;
    piStack_44 = (int *)&DAT_006335f8;
    piStack_4c = (int *)0x40ba49;
    iVar3 = (**(code **)*puStack_48)();
    if (iVar3 < 0) {
      piStack_54 = (int *)*piVar1;
      puStack_50 = &DAT_006335e8;
      puStack_58 = (undefined *)0x40ba5a;
      piStack_4c = piVar2;
      iVar3 = (**(code **)*piStack_54)();
      param_1[0x20] = 3;
    }
    else {
      param_1[0x20] = 7;
    }
    if (iVar3 < 0) {
      piStack_54 = (int *)*piVar1;
      puStack_50 = &DAT_006335d8;
      puStack_58 = (undefined *)0x40ba81;
      piStack_4c = piVar2;
      (**(code **)*piStack_54)();
      param_1[0x20] = 1;
    }
    piStack_4c = (int *)0x40ba92;
    piStack_54 = (int *)(**(code **)(*param_1 + 0xc))();
    puVar7 = (undefined *)0x0;
    puStack_50 = puVar7;
    if (piStack_54 != (undefined4 *)0x0) {
      piStack_4c = (int *)&stack0xffffffc8;
      puStack_50 = &DAT_0063c340;
      puStack_58 = (undefined *)0x40baa9;
      (**(code **)*piStack_54)();
      puStack_50 = puVar7;
    }
    piStack_54 = (int *)*piVar1;
    piStack_4c = param_1 + 0x23;
    puStack_58 = (undefined *)0x40babd;
    (**(code **)(*piStack_54 + 0x4c))();
    if (param_1[0x20] != 0) {
      puStack_58 = (undefined *)piStack_44;
      ppuStack_5c = (undefined **)0x0;
      piStack_60 = (int *)0x1;
      (**(code **)(*(int *)*piVar2 + 0x1c))((int *)*piVar2);
    }
    piStack_60 = (int *)*piVar1;
    puStack_58 = (undefined *)0x0;
    ppuStack_5c = &PTR_LAB_0060febc;
    (**(code **)(*piStack_60 + 0x14))();
    lpRect = (LPRECT)(param_1 + 0x29);
    GetClientRect((HWND)param_1[1],lpRect);
    param_1[0x27] = param_1[0x2b] - lpRect->left;
    param_1[0x28] = param_1[0x2c] - param_1[0x2a];
    piVar1 = param_1 + 0x25;
    pHVar4 = GetDC((HWND)0x0);
    iVar3 = GetDeviceCaps(pHVar4,0x58);
    iVar5 = GetDeviceCaps(pHVar4,0x5a);
    ReleaseDC((HWND)0x0,pHVar4);
    *piVar1 = ((iVar3 >> 1) + param_1[0x27] * 0x9ec) / iVar3;
    param_1[0x26] = ((iVar5 >> 1) + param_1[0x28] * 0x9ec) / iVar5;
    (**(code **)(*(int *)param_1[0x15] + 0x44))((int *)param_1[0x15],1,piVar1);
    (**(code **)(*(int *)param_1[0x15] + 0x48))((int *)param_1[0x15],1,piVar1);
    pHVar4 = GetDC((HWND)0x0);
    piStack_4c = (int *)GetDeviceCaps(pHVar4,0x58);
    puStack_48 = (undefined4 *)GetDeviceCaps(pHVar4,0x5a);
    ReleaseDC((HWND)0x0,pHVar4);
    param_1[0x27] = (*piVar1 * (int)piStack_4c + 0x4f6) / 0x9ec;
    param_1[0x28] = (param_1[0x26] * (int)puStack_48 + 0x4f6) / 0x9ec;
    param_1[0x2b] = param_1[0x27] + lpRect->left;
    param_1[0x2c] = param_1[0x2a] + param_1[0x28];
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
    piStack_60 = (int *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(puVar6,&DAT_0063c3f0,&piStack_60);
    }
    (**(code **)(*(int *)param_1[0x15] + 0x2c))
              ((int *)param_1[0x15],0xfffffffb,0,piStack_60,0,param_1[1],lpRect);
    piStack_44 = (int *)0x40bc8e;
    RedrawWindow((HWND)param_1[1],(RECT *)0x0,(HRGN)0x0,0x507);
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))();
    }
    param_2 = puStack_8;
    if (piStack_14 != (int *)0x0) {
      (**(code **)(*piStack_14 + 8))();
    }
  }
  (**(code **)*param_2)();
  if (unaff_EBP != (int *)0x0) {
    iVar3 = *unaff_EBP;
    (**(code **)(*param_1 + 0xc))();
    puStack_48 = (undefined4 *)0x40bce9;
    (**(code **)(iVar3 + 0xc))();
    if (unaff_EDI != (int *)0x0) {
      piStack_4c = (int *)0x40bcf7;
      (**(code **)(*unaff_EDI + 8))();
    }
  }
  return 0;
}


