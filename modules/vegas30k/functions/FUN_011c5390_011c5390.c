/* Module: vegas30k.dll
   Function: FUN_011c5390
   Address: 011c5390
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_011c5390(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  UINT UVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  char *_Source;
  int *piStack_8;
  int *local_4;
  
  if (param_1[2] == 0) {
    _Source = "MME MIDI Driver Class";
  }
  else {
    _Source = "Windows MIDI Mapper Class";
  }
  local_4 = param_1;
  _mbscpy((uchar *)(param_1 + 5),(uchar *)_Source);
  piVar1 = param_1 + 3;
  uVar3 = _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  if (-1 < (int)uVar3) {
    piVar2 = param_1 + 4;
    uVar3 = _SfList_CreateExZ_32(piVar2,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
    if (-1 < (int)uVar3) {
      UVar4 = midiOutGetNumDevs();
      if (UVar4 != 0) {
        if (param_1[2] == 0) {
          uVar3 = 0;
          if (UVar4 != 0) {
            do {
              pvVar5 = GlobalAlloc(0x40,0x2b0);
              pvVar6 = GlobalLock(pvVar5);
              if (pvVar6 != (LPVOID)0x0) {
                piVar7 = (int *)FUN_011d4ff0(uVar3);
                if (piVar7 != (int *)0x0) {
                  iVar8 = FUN_011d50c0();
                  if (iVar8 == 0) {
                    (**(code **)(*piVar7 + 4))(piVar7);
                    piStack_8 = piVar7;
                    _SfList_InsertList_16(*piVar1,0xffffffff,&piStack_8,1);
                  }
                  else {
                    (**(code **)(*piVar7 + 0x74))(1);
                  }
                }
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < UVar4);
          }
        }
        else {
          pvVar5 = GlobalAlloc(0x40,0x2b0);
          pvVar6 = GlobalLock(pvVar5);
          if (pvVar6 != (LPVOID)0x0) {
            piVar7 = (int *)FUN_011d4ff0(0xffffffff);
            if (piVar7 != (int *)0x0) {
              iVar8 = FUN_011d50c0();
              if (iVar8 == 0) {
                (**(code **)(*piVar7 + 4))(piVar7);
                piStack_8 = piVar7;
                _SfList_InsertList_16(*piVar1,0xffffffff,&piStack_8,1);
              }
              else {
                (**(code **)(*piVar7 + 0x74))(1);
              }
            }
          }
        }
      }
      UVar4 = midiInGetNumDevs();
      if (UVar4 != 0) {
        if (local_4[2] == 0) {
          uVar3 = 0;
          if (UVar4 != 0) {
            do {
              pvVar5 = GlobalAlloc(0x40,0x19c);
              pvVar6 = GlobalLock(pvVar5);
              if (pvVar6 != (LPVOID)0x0) {
                piVar7 = (int *)FUN_011d3e00(uVar3);
                if (piVar7 != (int *)0x0) {
                  iVar8 = FUN_011d3ec0();
                  if (iVar8 == 0) {
                    (**(code **)(*piVar7 + 4))(piVar7);
                    local_4 = piVar7;
                    _SfList_InsertList_16(*piVar2,0xffffffff,&local_4,1);
                  }
                  else {
                    (**(code **)(*piVar7 + 0x44))(1);
                  }
                }
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < UVar4);
          }
        }
        else {
          pvVar5 = GlobalAlloc(0x40,0x19c);
          pvVar6 = GlobalLock(pvVar5);
          if (pvVar6 != (LPVOID)0x0) {
            piVar7 = (int *)FUN_011d3e00(0xffffffff);
            if (piVar7 != (int *)0x0) {
              iVar8 = FUN_011d3ec0();
              if (iVar8 == 0) {
                (**(code **)(*piVar7 + 4))(piVar7);
                local_4 = piVar7;
                _SfList_InsertList_16(*piVar2,0xffffffff,&local_4,1);
              }
              else {
                (**(code **)(*piVar7 + 0x44))(1);
              }
            }
          }
        }
      }
      if ((int *)*piVar1 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)*piVar1;
      }
      if ((int *)*piVar2 == (int *)0x0) {
        return (uint)(iVar8 == 0);
      }
      uVar3 = (uint)(*(int *)*piVar2 + iVar8 == 0);
    }
  }
  return uVar3;
}


