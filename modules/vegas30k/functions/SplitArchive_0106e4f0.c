/* Module: vegas30k.dll
   Function: SplitArchive
   Address: 0106e4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::SplitArchive(__int64,unsigned long) */

long CArchive2::SplitArchive(__int64 param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  HANDLE hObject;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  longlong lVar15;
  uint in_stack_00000010;
  int iStack_778;
  uint local_76c;
  char acStack_75c [64];
  uchar auStack_71c [260];
  WCHAR local_618 [259];
  undefined2 local_412;
  CHAR aCStack_410 [260];
  char acStack_30c [260];
  WCHAR aWStack_208 [259];
  undefined2 uStack_2;
  
                    /* 0x6e4f0  529  ?SplitArchive@CArchive2@@QAGJ_JK@Z */
  iVar5 = 0;
  iVar2 = GetMultiVolumeStatus();
  if (iVar2 < 2) {
    if (((int)param_2 < 0) || (((int)param_2 < 1 && (param_1._4_4_ == 0)))) {
LAB_0106e9cc:
      FUN_01070600(0xaaaaaaa0,"SplitArchive",0);
      return -0x7ff8ffa9;
    }
    uVar3 = _SfGetDiskFreeSpace_8((int)param_1 + 0x678,0x400);
    iVar2 = *(int *)((int)param_1 + 0x50);
    uVar1 = *(uint *)((int)param_1 + 0x4c);
    if ((-1 < iVar2) && ((0 < iVar2 || (uVar1 != 0)))) {
      lVar15 = __alldiv(uVar1,iVar2,0x400,0);
      if ((0xffffffff < lVar15) || ((-1 < lVar15 && (uVar3 < (uint)lVar15)))) {
        FUN_01070600(0xaaaaaaa8,"SplitArchive",0);
        return -0x7ffb1f38;
      }
      if (((int)param_2 < 0) ||
         (((((int)param_2 < 1 && (param_1._4_4_ == 0)) || (iVar2 < (int)param_2)) ||
          ((iVar2 <= (int)param_2 && (uVar1 < param_1._4_4_)))))) goto LAB_0106e9cc;
      if (*(int *)((int)param_1 + 0x20) != 0) {
        MultiByteToWideChar(0,1,(LPCSTR)((int)param_1 + 0x678),-1,local_618,0x104);
        local_412 = 0;
        if ((~in_stack_00000010 & 1) == 0) {
          FUN_011496a0(local_618);
        }
        else {
          (**(code **)(**(int **)((int)param_1 + 0x20) + 4))(local_618,param_1._4_4_,param_2);
        }
        (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaa7);
      }
      uVar9 = param_1._4_4_ + *(int *)((int)param_1 + 100) * -2;
      uVar3 = *(uint *)((int)param_1 + 0x890);
      iVar5 = *(int *)((int)param_1 + 0x894);
      uVar10 = uVar9 + *(int *)((int)param_1 + 0x60) * -2;
      uVar11 = uVar10 + *(int *)((int)param_1 + 0x5c) * -2;
      uVar12 = uVar11 - uVar3;
      uVar13 = uVar12 - *(uint *)((int)param_1 + 0x44);
      local_76c = uVar13 - 0x38;
      iVar6 = 0;
      iVar8 = (((((((param_2 - (param_1._4_4_ < (uint)(*(int *)((int)param_1 + 100) * 2))) -
                   (uint)(uVar9 < (uint)(*(int *)((int)param_1 + 0x60) * 2))) -
                  (uint)(uVar10 < (uint)(*(int *)((int)param_1 + 0x5c) * 2))) - iVar5) -
                (uint)(uVar11 < uVar3)) - *(int *)((int)param_1 + 0x48)) -
              (uint)(uVar12 < *(uint *)((int)param_1 + 0x44))) - (uint)(uVar13 < 0x38);
      if ((iVar8 < 1) && (iVar8 < 0)) {
        local_76c = 0;
        iVar8 = 0;
      }
      else {
        iVar6 = FUN_010699b0(*(undefined4 *)((int)param_1 + 8),uVar3,iVar5,local_76c,iVar8,
                             *(undefined4 *)((int)param_1 + 0xc),uVar3,iVar5);
        if (iVar6 < 0) {
          return iVar6;
        }
        if ((*(int **)((int)param_1 + 0x20) != (int *)0x0) && ((~in_stack_00000010 & 1) != 0)) {
          (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaaf);
        }
      }
      if ((*(int *)((int)param_1 + 0x894) < 0) ||
         ((*(int *)((int)param_1 + 0x894) < 1 && (*(int *)((int)param_1 + 0x890) == 0)))) {
        puVar4 = (uchar *)((int)param_1 + 0x678);
      }
      else {
        puVar4 = (uchar *)((int)param_1 + 0x468);
      }
      _mbscpy(auStack_71c,puVar4);
      iStack_778 = 1;
      iVar5 = iVar8;
      uVar3 = local_76c;
      while( true ) {
        if (((iVar6 < 0) || (iVar2 < iVar5)) || ((iVar2 <= iVar5 && (uVar1 <= uVar3))))
        goto LAB_0106e928;
        _splitpath((char *)auStack_71c,(char *)0x0,(char *)0x0,acStack_30c,acStack_75c);
        _SfGetPathNameFromFilePath_12((int)param_1 + 0x678,local_618,0x104);
        iStack_778 = iStack_778 + 1;
        SfPrintF(aCStack_410,"%s%s%d%s",local_618,acStack_30c,iStack_778,acStack_75c);
        hObject = CreateFileA(aCStack_410,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0
                             );
        if (hObject == (HANDLE)0xffffffff) break;
        iVar6 = iVar5 + param_2 + (uint)CARRY4(uVar3,param_1._4_4_);
        uVar7 = param_2;
        uVar9 = param_1._4_4_;
        if ((iVar2 <= iVar6) && ((iVar2 < iVar6 || (uVar1 < uVar3 + param_1._4_4_)))) {
          uVar9 = uVar1 - uVar3;
          uVar7 = (iVar2 - iVar5) - (uint)(uVar1 < uVar3);
        }
        if (*(int *)((int)param_1 + 0x20) != 0) {
          MultiByteToWideChar(0,1,aCStack_410,-1,aWStack_208,0x104);
          uStack_2 = 0;
          if ((~in_stack_00000010 & 1) == 0) {
            FUN_011496a0(aWStack_208);
            (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaa7);
          }
          else {
            (**(code **)(**(int **)((int)param_1 + 0x20) + 4))(aWStack_208,uVar9,uVar7);
            (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaa7);
          }
        }
        iVar6 = FUN_010699b0(*(undefined4 *)((int)param_1 + 8),
                             *(uint *)((int)param_1 + 0x890) + uVar3,
                             *(int *)((int)param_1 + 0x894) + iVar5 +
                             (uint)CARRY4(*(uint *)((int)param_1 + 0x890),uVar3),uVar9,uVar7,hObject
                             ,0,0);
        if (*(int **)((int)param_1 + 0x20) != (int *)0x0) {
          (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaaf);
        }
        bVar14 = CARRY4(uVar3,uVar9);
        uVar3 = uVar3 + uVar9;
        iVar5 = iVar5 + uVar7 + (uint)bVar14;
        CloseHandle(hObject);
      }
      FUN_01070600(0xaaaaaaa2,"SplitArchive",0);
LAB_0106e928:
      uVar1 = *(uint *)((int)param_1 + 0x890);
      iVar5 = FUN_010699b0(*(undefined4 *)((int)param_1 + 8),uVar1 + *(uint *)((int)param_1 + 0x4c),
                           *(int *)((int)param_1 + 0x894) + *(int *)((int)param_1 + 0x50) +
                           (uint)CARRY4(uVar1,*(uint *)((int)param_1 + 0x4c)),
                           *(undefined4 *)((int)param_1 + 0x44),*(undefined4 *)((int)param_1 + 0x48)
                           ,*(undefined4 *)((int)param_1 + 0xc),uVar1 + local_76c,
                           *(int *)((int)param_1 + 0x894) + iVar8 + (uint)CARRY4(uVar1,local_76c));
      if (-1 < iVar5) {
        *(int *)((int)param_1 + 0x898) = iStack_778;
        *(uint *)((int)param_1 + 0x4c) = local_76c;
        *(uint *)((int)param_1 + 0x18) = *(uint *)((int)param_1 + 0x44) + local_76c;
        *(int *)((int)param_1 + 0x50) = iVar8;
        *(uint *)((int)param_1 + 0x1c) =
             *(int *)((int)param_1 + 0x48) + iVar8 +
             (uint)CARRY4(*(uint *)((int)param_1 + 0x44),local_76c);
        puVar4 = (uchar *)_SfGetFileNamePtrA_4(auStack_71c);
        _mbscpy((uchar *)((int)param_1 + 0x468),puVar4);
        iVar5 = FUN_0106c780(local_76c,iVar8);
        if (-1 < iVar5) {
          *(undefined4 *)((int)param_1 + 0x8a8) = 1;
          return iVar5;
        }
      }
    }
  }
  else {
    iVar5 = -0x7fffbffb;
  }
  return iVar5;
}


