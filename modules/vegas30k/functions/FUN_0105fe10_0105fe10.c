/* Module: vegas30k.dll
   Function: FUN_0105fe10
   Address: 0105fe10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0105fe10(int param_1,int param_2)

{
  undefined4 uVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint nNumberOfBytesToWrite;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar7 = (undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)(param_1 + 0x2ac) = 1;
  puVar6 = puVar7;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *puVar7 = 0x4b504653;
  *(undefined4 *)(param_1 + 0x260) = 1;
  *(undefined4 *)(param_1 + 0x264) = 0x40;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(uint *)(param_1 + 0x26c) = (-(uint)(param_2 != 0x11) & 0xfffffff8) + 0x10;
  local_8 = param_1;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x34) + 0x14))();
  *(uint *)(param_1 + 0x270) = (uint)*(ushort *)(iVar4 + 2);
  uVar1 = FUN_0105fc70(*(undefined4 *)(param_1 + 0x240),0);
  *(undefined4 *)(param_1 + 0x274) = uVar1;
  uVar8 = (**(code **)(**(int **)(param_1 + 0x34) + 0x1c))();
  *(undefined8 *)(param_1 + 0x278) = uVar8;
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 600) == -1) {
      param_2 = FUN_0105fd80();
    }
    if (*(HANDLE *)(param_1 + 600) != (HANDLE)0xffffffff) {
      BVar2 = WriteFile(*(HANDLE *)(param_1 + 600),puVar7,0x40,&local_c,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        param_2 = -0x7ffb1ff7;
      }
      else {
        param_2 = 0;
        if (local_c < *(uint *)(param_1 + 0x264)) {
          uVar3 = *(uint *)(param_1 + 0x264) - local_c;
          local_10 = uVar3;
          FUN_01002100();
          puVar7 = (undefined4 *)&stack0xffffffdc;
          local_14 = &stack0xffffffdc;
          for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar7 = 0;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          BVar2 = WriteFile(*(HANDLE *)(param_1 + 600),local_14,uVar3,(LPDWORD)0x0,(LPOVERLAPPED)0x0
                           );
          if (BVar2 == 0) {
            param_2 = -0x7ffb1ff7;
          }
        }
        uVar5 = (*(uint *)(param_1 + 0x26c) >> 3) * *(int *)(param_1 + 0x270);
        uVar3 = *(int *)(param_1 + 0x274) - 1;
        nNumberOfBytesToWrite = uVar5 * 2;
        uVar8 = __aulldiv(uVar3 + *(uint *)(param_1 + 0x278),
                          *(int *)(param_1 + 0x27c) + (uint)CARRY4(uVar3,*(uint *)(param_1 + 0x278))
                          ,*(int *)(param_1 + 0x274),0);
        lVar9 = __allmul(uVar8,nNumberOfBytesToWrite,0);
        iVar4 = local_8;
        lVar9 = lVar9 + (ulonglong)*(uint *)(param_1 + 0x264);
        local_14 = (undefined1 *)((ulonglong)lVar9 >> 0x20);
        SetFilePointer(*(HANDLE *)(local_8 + 600),(LONG)lVar9,(PLONG)&local_14,0);
        SetEndOfFile(*(HANDLE *)(iVar4 + 600));
        local_14 = (undefined1 *)((int)(uVar5 * -2) >> 0x1f);
        SetFilePointer(*(HANDLE *)(iVar4 + 600),uVar5 * -2,(PLONG)&local_14,2);
        FUN_01002100();
        puVar7 = (undefined4 *)&stack0xffffffdc;
        local_14 = &stack0xffffffdc;
        for (uVar3 = (uVar5 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        for (uVar3 = nNumberOfBytesToWrite & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar7 = 0;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        BVar2 = WriteFile(*(HANDLE *)(iVar4 + 600),local_14,nNumberOfBytesToWrite,&local_c,
                          (LPOVERLAPPED)0x0);
        param_1 = local_8;
        if (BVar2 == 0) {
          param_2 = -0x7ffb1ff7;
        }
        else if (-1 < param_2) {
          return param_2;
        }
      }
      FUN_01060b00(1);
      DeleteFileA((LPCSTR)(param_1 + 0x38));
    }
    return param_2;
  }
  *(undefined4 *)(param_1 + 0x20) = 1;
  return 0;
}


