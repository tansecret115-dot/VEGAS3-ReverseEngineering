/* Module: sfpublish.dll
   Function: FUN_0040af30
   Address: 0040af30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040afeb) */
/* WARNING: Removing unreachable block (ram,0x0040affc) */
/* WARNING: Removing unreachable block (ram,0x0040aff3) */
/* WARNING: Removing unreachable block (ram,0x0040b2b4) */
/* WARNING: Removing unreachable block (ram,0x0040b03d) */

undefined4 __thiscall FUN_0040af30(void *this,int *param_1)

{
  int *piVar1;
  LPRECT lpRect;
  int iVar2;
  HDC pHVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_EDI;
  int *piStack_60;
  wchar_t *pwStack_5c;
  undefined *puStack_58;
  int *piStack_54;
  undefined *puStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  int *piStack_44;
  undefined *puVar6;
  int *piVar7;
  int *piStack_14;
  int *piStack_8;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  FUN_004025d0((int *)((int)this + 0x50),param_1);
  piVar1 = (int *)((int)this + 0x54);
  (**(code **)*param_1)();
  if ((int *)*piVar1 != (int *)0x0) {
    (**(code **)(*(int *)*piVar1 + 0x58))();
    if ((*(uint *)((int)this + 0x90) & 0x20000) != 0) {
      puStack_48 = (undefined4 *)(**(code **)(*(int *)this + 0xc))();
      piVar7 = (int *)0x0;
      if (puStack_48 != (undefined4 *)0x0) {
        piStack_44 = (int *)&DAT_0043f1c8;
        puStack_4c = (undefined4 *)0x40afa5;
        (**(code **)*puStack_48)();
      }
      piStack_44 = (int *)*piVar1;
      puStack_48 = (undefined4 *)0x40afb2;
      (**(code **)(*piStack_44 + 0xc))();
      if (piVar7 != (int *)0x0) {
        piStack_44 = (int *)0x40afc0;
        (**(code **)(*piVar7 + 8))();
      }
    }
    puVar5 = (undefined4 *)*piVar1;
    if (puVar5 != (undefined4 *)0x0) {
      piStack_44 = (int *)&DAT_0043ca10;
      puStack_4c = (undefined4 *)0x40afdb;
      puStack_48 = puVar5;
      (**(code **)*puVar5)();
    }
    if ((*(uint *)((int)this + 0x90) & 0x20000) == 0) {
      puStack_48 = (undefined4 *)(**(code **)(*(int *)this + 0xc))();
      if (puStack_48 != (undefined4 *)0x0) {
        piStack_44 = (int *)&DAT_0043f1c8;
        puStack_4c = (undefined4 *)0x40b028;
        (**(code **)*puStack_48)();
      }
      piStack_44 = (int *)*piVar1;
      puStack_48 = (undefined4 *)0x40b035;
      (**(code **)(*piStack_44 + 0xc))();
    }
    puStack_48 = (undefined4 *)*piVar1;
    puVar5 = (undefined4 *)((int)this + 0x60);
    *(undefined4 *)((int)this + 0x80) = 0;
    piStack_44 = (int *)&DAT_0043ca40;
    puStack_4c = (undefined4 *)0x40b059;
    iVar2 = (**(code **)*puStack_48)();
    if (iVar2 < 0) {
      piStack_54 = (int *)*piVar1;
      puStack_50 = &DAT_0043ca30;
      puStack_58 = (undefined *)0x40b06a;
      puStack_4c = puVar5;
      iVar2 = (**(code **)*piStack_54)();
      *(undefined4 *)((int)this + 0x80) = 3;
    }
    else {
      *(undefined4 *)((int)this + 0x80) = 7;
    }
    if (iVar2 < 0) {
      piStack_54 = (int *)*piVar1;
      puStack_50 = &DAT_0043ca20;
      puStack_58 = (undefined *)0x40b091;
      puStack_4c = puVar5;
      (**(code **)*piStack_54)();
      *(undefined4 *)((int)this + 0x80) = 1;
    }
    puStack_4c = (undefined4 *)0x40b0a2;
    piStack_54 = (int *)(**(code **)(*(int *)this + 0xc))();
    puVar6 = (undefined *)0x0;
    puStack_50 = puVar6;
    if (piStack_54 != (undefined4 *)0x0) {
      puStack_4c = (undefined4 *)&stack0xffffffc8;
      puStack_50 = &DAT_0043f118;
      puStack_58 = (undefined *)0x40b0b9;
      (**(code **)*piStack_54)();
      puStack_50 = puVar6;
    }
    piStack_54 = (int *)*piVar1;
    puStack_4c = (undefined4 *)((int)this + 0x8c);
    puStack_58 = (undefined *)0x40b0cd;
    (**(code **)(*piStack_54 + 0x4c))();
    if (*(int *)((int)this + 0x80) != 0) {
      puStack_58 = (undefined *)piStack_44;
      pwStack_5c = (wchar_t *)0x0;
      piStack_60 = (int *)0x1;
      (**(code **)(*(int *)*puVar5 + 0x1c))((int *)*puVar5);
    }
    piStack_60 = (int *)*piVar1;
    puStack_58 = (undefined *)0x0;
    pwStack_5c = L"AXWIN";
    (**(code **)(*piStack_60 + 0x14))();
    lpRect = (LPRECT)((int)this + 0xa4);
    GetClientRect(*(HWND *)((int)this + 4),lpRect);
    *(int *)((int)this + 0x9c) = *(int *)((int)this + 0xac) - lpRect->left;
    *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xb0) - *(int *)((int)this + 0xa8);
    piVar1 = (int *)((int)this + 0x94);
    pHVar3 = GetDC((HWND)0x0);
    iVar2 = GetDeviceCaps(pHVar3,0x58);
    iVar4 = GetDeviceCaps(pHVar3,0x5a);
    ReleaseDC((HWND)0x0,pHVar3);
    *piVar1 = ((iVar2 >> 1) + *(int *)((int)this + 0x9c) * 0x9ec) / iVar2;
    *(int *)((int)this + 0x98) = ((iVar4 >> 1) + *(int *)((int)this + 0xa0) * 0x9ec) / iVar4;
    (**(code **)(**(int **)((int)this + 0x54) + 0x44))(*(int **)((int)this + 0x54),1,piVar1);
    (**(code **)(**(int **)((int)this + 0x54) + 0x48))(*(int **)((int)this + 0x54),1,piVar1);
    pHVar3 = GetDC((HWND)0x0);
    puStack_4c = (undefined4 *)GetDeviceCaps(pHVar3,0x58);
    puStack_48 = (undefined4 *)GetDeviceCaps(pHVar3,0x5a);
    ReleaseDC((HWND)0x0,pHVar3);
    *(int *)((int)this + 0x9c) = (*piVar1 * (int)puStack_4c + 0x4f6) / 0x9ec;
    *(int *)((int)this + 0xa0) = (*(int *)((int)this + 0x98) * (int)puStack_48 + 0x4f6) / 0x9ec;
    *(int *)((int)this + 0xac) = *(int *)((int)this + 0x9c) + lpRect->left;
    *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xa8) + *(int *)((int)this + 0xa0);
    puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0xc))();
    piStack_60 = (int *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(puVar5,&DAT_0043f1c8,&piStack_60);
    }
    (**(code **)(**(int **)((int)this + 0x54) + 0x2c))
              (*(int **)((int)this + 0x54),0xfffffffb,0,piStack_60,0,*(undefined4 *)((int)this + 4),
               lpRect);
    piStack_44 = (int *)0x40b29e;
    RedrawWindow(*(HWND *)((int)this + 4),(RECT *)0x0,(HRGN)0x0,0x507);
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))();
    }
    param_1 = piStack_8;
    if (piStack_14 != (int *)0x0) {
      (**(code **)(*piStack_14 + 8))();
    }
  }
  (**(code **)*param_1)();
  if (unaff_EBP != (int *)0x0) {
    iVar2 = *unaff_EBP;
    (**(code **)(*(int *)this + 0xc))();
    puStack_48 = (undefined4 *)0x40b2f9;
    (**(code **)(iVar2 + 0xc))();
    if (unaff_EDI != (int *)0x0) {
      puStack_4c = (undefined4 *)0x40b307;
      (**(code **)(*unaff_EDI + 8))();
    }
  }
  return 0;
}


