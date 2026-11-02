/* Module: vidcap30.exe
   Function: FUN_00454ed0
   Address: 00454ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_00454ed0(LPCSTR param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  HRESULT HVar3;
  undefined *puVar4;
  int *local_128;
  int *local_124;
  int *piStack_120;
  int *local_11c;
  undefined4 local_118;
  undefined2 auStack_114 [4];
  LPCWSTR pWStack_10c;
  CHAR aCStack_104 [259];
  undefined1 uStack_1;
  
  *param_3 = 0;
  local_11c = (int *)0x0;
  local_128 = (int *)0x0;
  local_124 = (int *)0x0;
  local_118 = 0;
  if ((param_1 != (LPCSTR)0x0) && (*param_1 != '\0')) {
    iVar2 = lstrcmpA("No Capture Device",param_1);
    if (iVar2 != 0) {
      HVar3 = CoCreateInstance((IID *)&DAT_005a2d68,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1d18,&local_11c
                              );
      if (-1 < HVar3) {
        puVar4 = &DAT_005a2d48;
        if (param_2 == 0) {
          puVar4 = &DAT_005a2cc8;
        }
        HVar3 = (**(code **)(*local_11c + 0xc))(local_11c,puVar4,&local_128,0);
        if (HVar3 == 0) {
          (**(code **)(*local_128 + 0x14))(local_128);
          bVar1 = false;
          do {
            HVar3 = (**(code **)(*local_128 + 0xc))(local_128,1,&local_124,&local_118);
            if (HVar3 != 0) break;
            piStack_120 = (int *)0x0;
            HVar3 = (**(code **)(*local_124 + 0x24))(local_124,0,0,&DAT_005a5b08,&piStack_120);
            if (-1 < HVar3) {
              auStack_114[0] = 8;
              HVar3 = (**(code **)(*piStack_120 + 0xc))
                                (piStack_120,&PTR_Rsrc_Bitmap_32_409_ImageData_24094__0058bdcc,
                                 auStack_114,0);
              if (HVar3 == 0) {
                if ((pWStack_10c == (LPCWSTR)0x0) || (*pWStack_10c != L'\0')) {
                  WideCharToMultiByte(0,0,pWStack_10c,-1,aCStack_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
                }
                else if (&stack0x00000000 != (undefined1 *)0x104) {
                  aCStack_104[0] = '\0';
                }
                uStack_1 = 0;
                Ordinal_6(pWStack_10c);
                iVar2 = lstrcmpA(aCStack_104,param_1);
                if (iVar2 == 0) {
                  HVar3 = (**(code **)(*local_124 + 0x20))(local_124,0,0,&DAT_005a1ca8,param_3);
                  bVar1 = true;
                }
              }
              if (piStack_120 != (int *)0x0) {
                (**(code **)(*piStack_120 + 8))(piStack_120);
              }
              piStack_120 = (int *)0x0;
            }
            if (local_124 != (int *)0x0) {
              (**(code **)(*local_124 + 8))(local_124);
            }
            local_124 = (int *)0x0;
          } while (!bVar1);
        }
      }
      if (local_128 != (int *)0x0) {
        (**(code **)(*local_128 + 8))(local_128);
      }
      local_128 = (int *)0x0;
      if (local_11c != (int *)0x0) {
        (**(code **)(*local_11c + 8))(local_11c);
      }
      return HVar3;
    }
  }
  return 0;
}


