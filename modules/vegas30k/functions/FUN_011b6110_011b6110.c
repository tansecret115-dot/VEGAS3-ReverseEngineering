/* Module: vegas30k.dll
   Function: FUN_011b6110
   Address: 011b6110
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011b6110(int param_1)

{
  int *piVar1;
  void *pvVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_EBX;
  uint uVar7;
  LPCWSTR lpWideCharStr;
  int *piStack_150;
  int *piVar8;
  int *piVar9;
  int aiStack_128 [3];
  int *local_11c [51];
  undefined1 uStack_4d;
  
  *(undefined4 *)(param_1 + 0x18) = 3;
  pvVar2 = calloc(1,0xc);
  *(void **)(param_1 + 0x1c) = pvVar2;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      pvVar3 = GlobalAlloc(0x40,0x144);
      pvVar4 = GlobalLock(pvVar3);
      if (pvVar4 == (LPVOID)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_011c0e40();
      }
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar7 * 4) = uVar5;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + uVar7 * 4) + 0x60))();
      (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + uVar7 * 4) + 4))();
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x18));
  }
  piStack_150 = (int *)0x11b61a1;
  iVar6 = CoCreateInstance((IID *)&DAT_011ee3e0,(LPUNKNOWN)0x0,1,(IID *)&DAT_011ed390,local_11c);
  if (iVar6 == 0) {
    piVar8 = aiStack_128;
    piVar9 = (int *)0x0;
    iVar6 = (**(code **)(*local_11c[0] + 0xc))();
    piStack_150 = (int *)0x11b61ca;
    (**(code **)(*unaff_EBX + 8))();
    piStack_150 = piVar9;
    if (iVar6 == 0) {
      (**(code **)(*piStack_150 + 0x14))();
      *(undefined4 *)(param_1 + 0x20) = 0x14;
      pvVar2 = calloc(1,0x50);
      *(void **)(param_1 + 0x24) = pvVar2;
      lpWideCharStr = (LPCWSTR)&stack0xfffffec4;
      uVar7 = 0;
      iVar6 = (**(code **)(*piVar8 + 0xc))();
      while (iVar6 == 0) {
        piVar9 = (int *)0x0;
        iVar6 = (**(code **)(*unaff_EBX + 0x24))(unaff_EBX,0,0,&DAT_011f0f00,&stack0xfffffeb8);
        if (-1 < iVar6) {
          piStack_150 = (int *)CONCAT22(piStack_150._2_2_,8);
          iVar6 = (**(code **)(iRam00000001 + 0xc))(1,L"FriendlyName",&piStack_150,0);
          if (iVar6 == 0) {
            if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
              WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)&piStack_150,0x104,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
            }
            else if (&stack0x00000000 != (undefined1 *)0x150) {
              piStack_150 = (int *)((uint)piStack_150 & 0xffffff00);
            }
            uStack_4d = 0;
            pvVar3 = GlobalAlloc(0x40,0x1a0);
            pvVar4 = GlobalLock(pvVar3);
            if (pvVar4 == (LPVOID)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_011c1440(uVar7,&piStack_150);
            }
            *(undefined4 *)(*(int *)(param_1 + 0x24) + uVar7 * 4) = uVar5;
            iVar6 = (**(code **)(**(int **)(*(int *)(param_1 + 0x24) + uVar7 * 4) + 0x40))();
            piVar1 = *(int **)(*(int *)(param_1 + 0x24) + uVar7 * 4);
            (**(code **)(*piVar1 + 4))(piVar1);
            Ordinal_6(1);
            uVar7 = uVar7 + 1;
          }
          (**(code **)(*piVar9 + 8))(piVar9);
        }
        (**(code **)(*piVar8 + 8))(piVar8);
        if (*(uint *)(param_1 + 0x20) < uVar7) {
          uVar7 = *(uint *)(param_1 + 0x20);
          break;
        }
        iVar6 = (**(code **)(*piStack_150 + 0xc))(piStack_150,1,&stack0xfffffeb4,&stack0xfffffec0);
      }
      *(uint *)(param_1 + 0x20) = uVar7;
      (**(code **)(*piStack_150 + 8))(piStack_150);
    }
  }
  return iVar6;
}


