/* Module: sfmarket2.dll
   Function: FUN_00404630
   Address: 00404630
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT __thiscall FUN_00404630(void *this,undefined4 *param_1,undefined4 *param_2)

{
  ULARGE_INTEGER libNewSize;
  HRESULT HVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *unaff_EBX;
  IStream *unaff_ESI;
  undefined4 *unaff_retaddr;
  IStream *pIVar6;
  ULARGE_INTEGER *plibNewPosition;
  int *local_154;
  IStream *local_150;
  LPSTREAM pIStack_14c;
  LPSTREAM local_148;
  int *piStack_144;
  int *local_140;
  int *apiStack_13c [4];
  WCHAR local_12c [15];
  undefined2 uStack_10e;
  WCHAR local_c8 [59];
  undefined2 uStack_52;
  undefined2 uStack_4a;
  undefined2 local_2;
  
  HVar1 = 0;
  if (((*(int *)((int)this + 0x1be0) != 0) && (param_1 != (undefined4 *)0x0)) &&
     (param_2 != (undefined4 *)0x0)) {
    *param_1 = 0;
    *param_2 = 0;
    local_150 = (IStream *)0x0;
    HVar1 = FUN_0042e280(&local_150);
    if (-1 < HVar1) {
      local_140 = (int *)0x0;
      HVar1 = FUN_0042e320((int)local_150,local_150,L"upgradeinfo",&local_140);
      if (-1 < HVar1) {
        local_148 = (IStream *)0x0;
        HVar1 = FUN_0042e320((int)local_150,local_140,L"computerid",&local_148);
        if (-1 < HVar1) {
          FUN_00414120(*(void **)((int)this + 0x1be0),(LPSTR)local_12c,100);
          MultiByteToWideChar(0,1,(LPCSTR)local_12c,-1,local_c8,100);
          local_2 = 0;
          local_154 = (int *)0x0;
          HVar1 = FUN_0042e480((int *)local_150,local_148,local_c8,&local_154);
          if (-1 < HVar1) {
            (**(code **)(*local_154 + 8))(local_154);
            local_154 = (int *)0x0;
          }
          (*local_148->lpVtbl->Release)(local_148);
          local_148 = (IStream *)0x0;
          if (-1 < HVar1) {
            local_154 = (int *)0x0;
            HVar1 = FUN_0042e320((int)local_150,local_140,L"currentkey",&local_154);
            if (-1 < HVar1) {
              HVar1 = FUN_00416a80(*(void **)((int)this + 0x1be0),(LPSTR)local_12c,0x40);
              if (-1 < HVar1) {
                MultiByteToWideChar(0,1,(LPCSTR)local_12c,-1,local_c8,0x40);
                uStack_4a = 0;
                pIStack_14c = (IStream *)0x0;
                HVar1 = FUN_0042e480((int *)local_150,local_154,local_c8,&pIStack_14c);
                if (-1 < HVar1) {
                  (*pIStack_14c->lpVtbl->Release)(pIStack_14c);
                }
              }
              (**(code **)(*local_154 + 8))(local_154);
              if (-1 < HVar1) {
                piStack_144 = (int *)0x0;
                HVar1 = FUN_0042e320((int)local_150,local_140,L"productnumber",&piStack_144);
                if (-1 < HVar1) {
                  FUN_0042b7a0(*(uint *)(*(int *)((int)this + 0x1be0) + 0x30),(uchar *)apiStack_13c,
                               0);
                  MultiByteToWideChar(0,1,(LPCSTR)apiStack_13c,-1,local_12c,0x10);
                  uStack_10e = 0;
                  local_154 = (int *)0x0;
                  HVar1 = FUN_0042e480((int *)local_150,piStack_144,local_12c,&local_154);
                  if (-1 < HVar1) {
                    (**(code **)(*local_154 + 8))(local_154);
                    local_154 = (int *)0x0;
                  }
                  (**(code **)(*piStack_144 + 8))(piStack_144);
                  if (-1 < HVar1) {
                    local_154 = (int *)0x0;
                    FUN_0042e320((int)local_150,local_140,L"username",&local_154);
                    piStack_144 = (int *)0x0;
                    HVar1 = FUN_0042e320((int)local_150,local_154,L"first",&piStack_144);
                    if (-1 < HVar1) {
                      iVar2 = FUN_0041a080((LPSTR)local_12c,0x3c);
                      if (iVar2 < 0) {
                        HVar1 = 0;
                      }
                      else {
                        MultiByteToWideChar(0,1,(LPCSTR)local_12c,-1,local_c8,0x3c);
                        uStack_52 = 0;
                        pIStack_14c = (IStream *)0x0;
                        HVar1 = FUN_0042e480((int *)local_150,piStack_144,local_c8,&pIStack_14c);
                        if (-1 < HVar1) {
                          (*pIStack_14c->lpVtbl->Release)(pIStack_14c);
                        }
                      }
                      (**(code **)(*piStack_144 + 8))(piStack_144);
                      piStack_144 = (int *)0x0;
                      if (-1 < HVar1) {
                        pIStack_14c = (IStream *)0x0;
                        HVar1 = FUN_0042e320((int)local_150,local_154,L"last",&pIStack_14c);
                        if (-1 < HVar1) {
                          iVar2 = FUN_0041a160((LPSTR)local_12c,100);
                          if (iVar2 < 0) {
                            HVar1 = 0;
                          }
                          else {
                            MultiByteToWideChar(0,1,(LPCSTR)local_12c,-1,local_c8,100);
                            local_2 = 0;
                            apiStack_13c[0] = (int *)0x0;
                            HVar1 = FUN_0042e480((int *)local_150,pIStack_14c,local_c8,apiStack_13c)
                            ;
                            if (-1 < HVar1) {
                              (**(code **)(*apiStack_13c[0] + 8))(apiStack_13c[0]);
                            }
                          }
                          (*pIStack_14c->lpVtbl->Release)(pIStack_14c);
                        }
                      }
                    }
                    (**(code **)(*local_154 + 8))(local_154);
                  }
                }
              }
            }
          }
        }
        (**(code **)(*local_140 + 8))(local_140);
        local_140 = (int *)0x0;
        if (-1 < HVar1) {
          local_148 = (IStream *)0x0;
          HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_148);
          if (-1 < HVar1) {
            local_154 = (int *)0x0;
            plibNewPosition = (ULARGE_INTEGER *)&DAT_004a40b0;
            pIVar6 = local_150;
            HVar1 = (*local_150->lpVtbl->QueryInterface)(local_150,(IID *)&DAT_004a40b0,&local_154);
            if (-1 < HVar1) {
              libNewSize.s.HighPart = (DWORD)pIVar6;
              libNewSize.s.LowPart = 1;
              HVar1 = (*unaff_ESI->lpVtbl->SetSize)(unaff_ESI,libNewSize);
              if (-1 < HVar1) {
                HVar1 = (*local_150->lpVtbl->Seek)
                                  (local_150,(LARGE_INTEGER)0x200000000,(DWORD)&piStack_144,
                                   plibNewPosition);
                if (-1 < HVar1) {
                  local_150 = (IStream *)0x0;
                  HVar1 = GetHGlobalFromStream(pIStack_14c,&local_150);
                  if (-1 < HVar1) {
                    puVar3 = GlobalLock(local_150);
                    puVar4 = CoTaskMemAlloc((SIZE_T)local_140);
                    *unaff_retaddr = puVar4;
                    if (puVar4 == (undefined4 *)0x0) {
                      HVar1 = -0x7ff8fff2;
                    }
                    else {
                      for (uVar5 = (uint)local_140 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                        *puVar4 = *puVar3;
                        puVar3 = puVar3 + 1;
                        puVar4 = puVar4 + 1;
                      }
                      for (uVar5 = (uint)local_140 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
                        puVar3 = (undefined4 *)((int)puVar3 + 1);
                        puVar4 = (undefined4 *)((int)puVar4 + 1);
                      }
                      HVar1 = 0;
                      *param_1 = local_140;
                    }
                    GlobalUnlock(local_150);
                  }
                }
              }
              (**(code **)(*unaff_EBX + 8))(unaff_EBX);
            }
            (**(code **)(*local_154 + 8))(local_154);
          }
        }
      }
      (*local_150->lpVtbl->Release)(local_150);
    }
  }
  return HVar1;
}


