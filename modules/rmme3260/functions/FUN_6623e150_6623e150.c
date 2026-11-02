/* Module: rmme3260.dll
   Function: FUN_6623e150
   Address: 6623e150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623e150(int *param_1)

{
  int *this;
  HWND hWnd;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  HWND hWnd_00;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  uint local_10;
  int *local_c;
  int *local_8;
  
  piVar2 = param_1;
  iVar5 = param_1[0x14];
  if (iVar5 == 0) {
    if (param_1[0x38] != 0) {
      *(undefined4 *)(param_1[0x15] + 0xfc) = 1;
      param_1[0x5e] = 0;
      param_1[0x5f] = 0;
      FUN_66249270(param_1[0x4a]);
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar2[0x15] + 0xb4));
      FUN_6623e030((int)(piVar2 + -6));
      FUN_662498b0(piVar2[0x4a]);
      FUN_6623e0c0((int)(piVar2 + -6));
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2[0x15] + 0xb4));
      hWnd = (HWND)piVar2[0x4b];
      hWnd_00 = GetParent(hWnd);
      while (hWnd_00 != (HWND)0x0) {
        pHVar4 = GetParent(hWnd_00);
        hWnd = hWnd_00;
        hWnd_00 = pHVar4;
      }
      if (piVar2[0x3b] != 0) {
        local_10 = 1;
        iVar5 = (*(code *)**(undefined4 **)piVar2[0x1f])
                          ((undefined4 *)piVar2[0x1f],&DAT_6626aea8,&param_1);
        if (iVar5 == 0) {
          iVar5 = (**(code **)(*param_1 + 0x14))(param_1);
          sVar8 = (short)iVar5;
          while (sVar8 != 0) {
            iVar6 = (**(code **)(*param_1 + 0x18))(param_1,iVar5,&local_c);
            if (iVar6 == 0) {
              iVar6 = (**(code **)*local_c)(local_c,&DAT_6626ae98,&local_8);
              if (iVar6 == 0) {
                uVar7 = (**(code **)(*local_8 + 0x10))(local_8);
                local_10 = local_10 & uVar7;
                if (local_8 != (int *)0x0) {
                  (**(code **)(*local_8 + 8))(local_8);
                  local_8 = (int *)0x0;
                }
              }
              if (local_c != (int *)0x0) {
                (**(code **)(*local_c + 8))(local_c);
                local_c = (int *)0x0;
              }
            }
            iVar5 = iVar5 + 0xffff;
            sVar8 = (short)iVar5;
          }
          if (param_1 != (int *)0x0) {
            (**(code **)(*param_1 + 8))(param_1);
            param_1 = (int *)0x0;
          }
        }
        if (local_10 == 0) {
          FUN_662410b0(piVar2 + -6,hWnd,(HWND)0xffffffff,0,0,0,0,3);
        }
        piVar2[0x3b] = 0;
      }
      SetParent((HWND)piVar2[0x4b],(HWND)piVar2[0x5b]);
      if (DAT_6627cfec == 0) {
        FUN_662425f0((undefined4 *)piVar2[0x1c]);
        FUN_662424f0((undefined4 *)piVar2[0x1c]);
        puVar1 = (undefined4 *)piVar2[0x1c];
        if (puVar1 != (undefined4 *)0x0) {
          thunk_FUN_662424f0(puVar1);
          operator_delete(puVar1);
          piVar2[0x1c] = 0;
        }
      }
      this = piVar2 + -6;
      FUN_662410b0(this,(HWND)piVar2[0x4b],(HWND)0x1,0,0,0,0,3);
      FUN_66240ee0(this,(HWND)piVar2[0x4b],piVar2[0x57],piVar2[0x58],piVar2[0x59],piVar2[0x5a],0);
      (**(code **)(*this + 0x30))(this,piVar2[0x59],piVar2[0x5a]);
      *(undefined4 *)(piVar2[0x15] + 0xfc) = 0;
      piVar2[0x5e] = 0;
      piVar2[0x5f] = 0;
      piVar2[0x38] = 0;
      FUN_6623c580((int *)piVar2[0x15]);
      if ((int *)piVar2[0x18] != (int *)0x0) {
        FUN_66245c10((int *)piVar2[0x18]);
        FUN_66245bf0((undefined4 *)piVar2[0x18]);
      }
      piVar2[0x65] = 0;
      SetFocus((HWND)piVar2[0x4b]);
    }
    return 0;
  }
  uVar3 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x10))(iVar5 + 0x18);
  return uVar3;
}


