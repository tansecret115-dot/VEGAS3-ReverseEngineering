/* Module: vfplugs.dll
   Function: FUN_00412960
   Address: 00412960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00412960(void *this,undefined4 param_1,uint param_2,HWND param_3)

{
  undefined4 *puVar1;
  SIZE_T dwBytes;
  wchar_t *pMem;
  uint uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  UINT UVar6;
  WPARAM WVar7;
  LRESULT LVar8;
  int *unaff_EBX;
  uint uVar9;
  size_t _Count;
  float10 fVar10;
  wchar_t *local_124;
  int *local_120;
  undefined4 uStack_11c;
  SIZE_T aSStack_118 [5];
  CHAR local_104 [260];
  
  uVar9 = param_2 & 0xffff;
  uVar2 = param_2 >> 0x10;
  if ((0x9e33 < uVar9) && (uVar9 < 41000)) {
    puVar1 = (undefined4 *)**(int **)((int)this + 8);
    local_124 = (wchar_t *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_00486aa0,&local_124);
    }
    iVar3 = (*(code *)**(undefined4 **)local_124)(local_124,&DAT_00486b10,&local_120);
    if (-1 < iVar3) {
      (**(code **)(*local_120 + 0x14))(local_120,uVar9 - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_124 != (wchar_t *)0x0) {
      (**(code **)(*(int *)local_124 + 8))(local_124);
    }
    uVar9 = 0;
LAB_00412a17:
    switch(uVar9) {
    case 0x490:
      if (uVar2 != 0x400) {
        return 0;
      }
      LVar8 = SendMessageA(param_3,0xb8,0,0);
      if (LVar8 == 0) {
        return 0;
      }
      local_120 = (int *)0x0;
      uStack_11c = 0x4b0;
      LVar8 = SendMessageA(param_3,0x45f,(WPARAM)&local_120,0);
      _Count = LVar8 + 1;
      dwBytes = _Count * 2;
      pvVar4 = GlobalAlloc(0x42,dwBytes);
      local_124 = GlobalLock(pvVar4);
      aSStack_118[1] = 0;
      aSStack_118[2] = 0x4b0;
      aSStack_118[3] = 0;
      aSStack_118[4] = 0;
      *(size_t *)((int)this + 0x310) = _Count;
      aSStack_118[0] = dwBytes;
      if (((int)_Count < 2) || (local_124 == (wchar_t *)0x0)) {
        if (*(size_t *)((int)this + 0x304) == _Count) {
          UpdateWindow(*(HWND *)((int)this + 0x30));
        }
        else {
          if (*(LPCVOID *)((int)this + 0x308) != (LPCVOID)0x0) {
            pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x308));
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x308));
            GlobalFree(pvVar4);
            *(undefined4 *)((int)this + 0x304) = 0;
            *(undefined4 *)((int)this + 0x308) = 0;
          }
          *(undefined4 *)((int)this + 0x304) = 0;
          (**(code **)(*(int *)this + 0x2c))(this);
        }
      }
      else {
        SendMessageA(param_3,0x45e,(WPARAM)aSStack_118,(LPARAM)local_124);
        if ((*(size_t *)((int)this + 0x304) == _Count) &&
           (iVar3 = wcscmp(*(wchar_t **)((int)this + 0x308),local_124), iVar3 == 0)) {
          UpdateWindow(*(HWND *)((int)this + 0x30));
        }
        else {
          if (*(LPCVOID *)((int)this + 0x308) != (LPCVOID)0x0) {
            pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x308));
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x308));
            GlobalFree(pvVar4);
            *(undefined4 *)((int)this + 0x304) = 0;
            *(undefined4 *)((int)this + 0x308) = 0;
          }
          if (0 < (int)_Count) {
            pvVar4 = GlobalAlloc(2,dwBytes);
            pvVar5 = GlobalLock(pvVar4);
            *(LPVOID *)((int)this + 0x308) = pvVar5;
          }
          *(size_t *)((int)this + 0x304) = _Count;
          wcsncpy(*(wchar_t **)((int)this + 0x308),local_124,_Count);
          (**(code **)(*(int *)this + 0x2c))(this);
        }
      }
      pMem = local_124;
      if (local_124 == (wchar_t *)0x0) {
        return 0;
      }
      pvVar4 = GlobalHandle(local_124);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
      return 0;
    default:
      return 0;
    case 0x4a8:
      if (uVar2 != 1) {
        return 0;
      }
      WVar7 = SendMessageA(param_3,0x147,0,0);
      LVar8 = SendMessageA(param_3,0x150,WVar7,0);
      _mbscpy((uchar *)((int)this + 0x68),
              (uchar *)(*(int *)(*(int *)((int)this + 0x30c) + 4) * LVar8 + 0x1c +
                       *(int *)(*(int *)((int)this + 0x30c) + 8)));
      (**(code **)(*(int *)this + 0x2c))(this);
      return 0;
    case 0x4a9:
      if (uVar2 != 1) {
        return 0;
      }
      *(undefined4 *)((int)this + 0x5c) = 400;
      *(undefined1 *)((int)this + 0x60) = 0;
      uVar2 = SendMessageA(param_3,0x147,0,0);
      if ((byte)((byte)(param_2 >> 0x10) & (byte)uVar2) != 0) {
        *(undefined4 *)((int)this + 0x5c) = 700;
      }
      if ((uVar2 & 2) != 0) {
        *(undefined1 *)((int)this + 0x60) = 1;
      }
      (**(code **)(*(int *)this + 0x2c))(this);
      return 0;
    case 0x4b6:
      if (uVar2 == 4) {
        UVar6 = GetDlgItemInt(*(HWND *)((int)this + 0x30),0x4b6,(BOOL *)&local_120,1);
        if (UVar6 < 4) {
          UVar6 = 4;
        }
        else {
          UVar6 = GetDlgItemInt(*(HWND *)((int)this + 0x30),0x4b6,(BOOL *)&local_120,1);
          if (UVar6 < 0x321) {
            UVar6 = GetDlgItemInt(*(HWND *)((int)this + 0x30),0x4b6,(BOOL *)&local_120,1);
          }
          else {
            UVar6 = 800;
          }
        }
        if (UVar6 != *(UINT *)((int)this + 0x4c)) {
          *(UINT *)((int)this + 0x4c) = UVar6;
          (**(code **)(*(int *)this + 0x2c))(this);
        }
        FUN_00411d10((int)this);
        return 0;
      }
      if (uVar2 != 1) {
        return 0;
      }
      WVar7 = SendMessageA(param_3,0x147,0,0);
      LVar8 = SendMessageA(param_3,0x150,WVar7,0);
      if (LVar8 != *(int *)((int)this + 0x4c)) {
        *(LRESULT *)((int)this + 0x4c) = LVar8;
        (**(code **)(*(int *)this + 0x2c))(this);
        FUN_00411d10((int)this);
        return 0;
      }
      break;
    case 0x516:
      if (uVar2 != 0x200) {
        return 0;
      }
      iVar3 = GetWindowTextA(param_3,local_104,0x104);
      if (iVar3 != 0) {
        fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
        if ((float10)_DAT_00487598 <= fVar10) {
          fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
          if (fVar10 <= (float10)_DAT_00488148) {
            fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
          }
          else {
            fVar10 = (float10)_DAT_00488148;
          }
        }
        else {
          fVar10 = (float10)_DAT_00487598;
        }
        if ((float10)_DAT_00488130 <= ABS(fVar10 - (float10)*(float *)((int)this + 0xb0))) {
          *(float *)((int)this + 0xb0) = (float)fVar10;
          (**(code **)(*(int *)this + 0x2c))(this);
          return 0;
        }
      }
    }
LAB_004133e5:
    FUN_00411d10((int)this);
    return 0;
  }
  if (0x5df < uVar9) {
    if (uVar9 < 0x645) {
      if (uVar9 == 0x644) {
        SendMessageA(param_3,0x702,0,(int)this + 0x118);
        *(undefined4 *)((int)this + 0x10c) = 1;
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      }
      switch(uVar9) {
      case 0x5e0:
        if (uVar2 != 0x200) {
          return 0;
        }
        iVar3 = GetWindowTextA(param_3,local_104,0x104);
        if (iVar3 != 0) {
          fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
          if ((float10)_DAT_00487598 <= fVar10) {
            fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
            if (fVar10 <= (float10)_DAT_00487590) {
              fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
            }
            else {
              fVar10 = (float10)_DAT_00487590;
            }
          }
          else {
            fVar10 = (float10)_DAT_00487598;
          }
          if ((float10)_DAT_00488130 <= ABS(fVar10 - (float10)*(float *)((int)this + 0xfc))) {
            *(float *)((int)this + 0xfc) = (float)fVar10;
            (**(code **)(*(int *)this + 0x2c))(this);
            return 0;
          }
        }
        break;
      default:
        return 0;
      case 0x5e2:
        if (uVar2 != 0x200) {
          return 0;
        }
        iVar3 = GetWindowTextA(param_3,local_104,0x104);
        if (iVar3 != 0) {
          fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
          if ((float10)_DAT_00488140 <= fVar10) {
            fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
            if (fVar10 <= (float10)_DAT_00487590) {
              fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
            }
            else {
              fVar10 = (float10)_DAT_00487590;
            }
          }
          else {
            fVar10 = (float10)_DAT_00488140;
          }
          if ((float10)_DAT_00488130 <= ABS(fVar10 - (float10)*(float *)((int)this + 0xe8))) {
            *(float *)((int)this + 0xe8) = (float)fVar10;
            (**(code **)(*(int *)this + 0x2c))(this);
            return 0;
          }
        }
        break;
      case 0x5e5:
        SendMessageA(param_3,0x702,0,(int)this + 0xec);
        *(undefined4 *)((int)this + 0xb8) = 1;
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      case 0x640:
        if (uVar2 != 0x200) {
          return 0;
        }
        iVar3 = GetWindowTextA(param_3,local_104,0x104);
        if (iVar3 != 0) {
          fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
          if ((float10)_DAT_00487598 <= fVar10) {
            fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
            if (fVar10 <= (float10)_DAT_00487590) {
              fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
            }
            else {
              fVar10 = (float10)_DAT_00487590;
            }
          }
          else {
            fVar10 = (float10)_DAT_00487598;
          }
          if ((float10)_DAT_00488130 <= ABS(fVar10 - (float10)*(float *)((int)this + 0x128))) {
            *(float *)((int)this + 0x128) = (float)fVar10;
            (**(code **)(*(int *)this + 0x2c))(this);
            return 0;
          }
        }
        break;
      case 0x641:
        if (uVar2 != 0x200) {
          return 0;
        }
        iVar3 = GetWindowTextA(param_3,local_104,0x104);
        if (iVar3 != 0) {
          fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
          if ((float10)_DAT_00487598 <= fVar10) {
            fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
            if (fVar10 <= (float10)_DAT_00487590) {
              fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
            }
            else {
              fVar10 = (float10)_DAT_00487590;
            }
          }
          else {
            fVar10 = (float10)_DAT_00487598;
          }
          if ((float10)_DAT_00488130 <= ABS(fVar10 - (float10)*(float *)((int)this + 300))) {
            *(float *)((int)this + 300) = (float)fVar10;
            (**(code **)(*(int *)this + 0x2c))(this);
            return 0;
          }
        }
      }
    }
    else {
      if (41000 < uVar9) {
        if (uVar9 != 0xa029) {
          return 0;
        }
        FUN_00402b20(*(HWND *)((int)this + 0x30));
        return 0;
      }
      if (uVar9 == 41000) {
        FUN_00428ea0(1,*(HWND *)((int)this + 0x30),0x3e9,0xf,(uchar *)0x0);
        return 0;
      }
      if (uVar9 == 0x645) {
        LVar8 = SendMessageA(param_3,0xf0,0,0);
        *(LRESULT *)((int)this + 0x10c) = LVar8;
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      }
      if (uVar9 != 0x700) {
        return 0;
      }
    }
    goto LAB_004133e5;
  }
  if (uVar9 == 0x5df) {
    if (uVar2 != 0x200) {
      return 0;
    }
    iVar3 = GetWindowTextA(param_3,local_104,0x104);
    if (iVar3 != 0) {
      fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
      if ((float10)_DAT_00488140 <= fVar10) {
        fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
        if (fVar10 <= (float10)_DAT_00487590) {
          fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
        }
        else {
          fVar10 = (float10)_DAT_00487590;
        }
      }
      else {
        fVar10 = (float10)_DAT_00488140;
      }
      if ((float10)_DAT_00488130 <= ABS(fVar10 - (float10)*(float *)((int)this + 0xe4))) {
        *(float *)((int)this + 0xe4) = (float)fVar10;
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      }
    }
    goto LAB_004133e5;
  }
  if (uVar9 < 0x518) {
    if (uVar9 == 0x517) {
      if (uVar2 != 0x200) {
        return 0;
      }
      iVar3 = GetWindowTextA(param_3,local_104,0x104);
      if (iVar3 != 0) {
        fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
        if ((float10)_DAT_00487598 <= fVar10) {
          fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
          if (fVar10 <= (float10)_DAT_00488148) {
            fVar10 = FUN_0043a430(local_104,(undefined4 *)0x0);
          }
          else {
            fVar10 = (float10)_DAT_00488148;
          }
        }
        else {
          fVar10 = (float10)_DAT_00487598;
        }
        if ((float10)_DAT_00488130 <= ABS(fVar10 - (float10)*(float *)((int)this + 0xb4))) {
          *(float *)((int)this + 0xb4) = (float)fVar10;
          (**(code **)(*(int *)this + 0x2c))(this);
          return 0;
        }
      }
      goto LAB_004133e5;
    }
    goto LAB_00412a17;
  }
  switch(uVar9) {
  case 0x51b:
    if (uVar2 == 1) {
      WVar7 = SendMessageA(param_3,0x147,0,0);
      LVar8 = SendMessageA(param_3,0x150,WVar7,0);
      *(LRESULT *)((int)this + 0x8c) = LVar8;
      (**(code **)(*(int *)this + 0x2c))(this);
      return 0;
    }
    break;
  case 0x51c:
    if (uVar2 == 1) {
      WVar7 = SendMessageA(param_3,0x147,0,0);
      LVar8 = SendMessageA(param_3,0x150,WVar7,0);
      *(LRESULT *)((int)this + 0x88) = LVar8;
      (**(code **)(*(int *)this + 0x2c))(this);
      return 0;
    }
    break;
  case 0x51f:
    iVar3 = (int)this + 0xa0;
    goto LAB_00412faf;
  case 0x579:
    iVar3 = (int)this + 0x90;
LAB_00412faf:
    SendMessageA(param_3,0x702,0,iVar3);
    (**(code **)(*(int *)this + 0x2c))(this);
    return 0;
  case 0x5dc:
    LVar8 = SendMessageA(param_3,0xf0,0,0);
    *(LRESULT *)((int)this + 0xb8) = LVar8;
    (**(code **)(*(int *)this + 0x2c))(this);
    return 0;
  }
  return 0;
}


