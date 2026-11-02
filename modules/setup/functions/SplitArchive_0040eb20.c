/* Module: Setup.exe
   Function: SplitArchive
   Address: 0040eb20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::SplitArchive(__int64,unsigned long) */

long CArchive2::SplitArchive(__int64 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  HANDLE hObject;
  uchar *puVar5;
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
  uchar auStack_410 [260];
  char acStack_30c [260];
  WCHAR aWStack_208 [259];
  undefined2 uStack_2;
  
                    /* 0xeb20  64  ?SplitArchive@CArchive2@@QAGJ_JK@Z */
  iVar6 = 0;
  iVar3 = GetMultiVolumeStatus();
  if (iVar3 < 2) {
    if (((int)param_2 < 0) || (((int)param_2 < 1 && (param_1._4_4_ == 0)))) {
LAB_0040effc:
      FUN_00410c30((void *)param_1,0xaaaaaaa0,(uchar *)"SplitArchive",(uchar *)0x0);
      return -0x7ff8ffa9;
    }
    uVar4 = _SfGetDiskFreeSpace_8((uchar *)((int)(void *)param_1 + 0x678),0x400);
    uVar1 = *(uint *)((int)(void *)param_1 + 0x50);
    uVar2 = *(uint *)((int)(void *)param_1 + 0x4c);
    if ((-1 < (int)uVar1) && ((0 < (int)uVar1 || (uVar2 != 0)))) {
      lVar15 = __alldiv(uVar2,uVar1,0x400,0);
      if ((0xffffffff < lVar15) || ((-1 < lVar15 && (uVar4 < (uint)lVar15)))) {
        FUN_00410c30((void *)param_1,0xaaaaaaa8,(uchar *)"SplitArchive",(uchar *)0x0);
        return -0x7ffb1f38;
      }
      if (((int)param_2 < 0) ||
         (((((int)param_2 < 1 && (param_1._4_4_ == 0)) || ((int)uVar1 < (int)param_2)) ||
          (((int)uVar1 <= (int)param_2 && (uVar2 < param_1._4_4_)))))) goto LAB_0040effc;
      if (*(int *)((int)(void *)param_1 + 0x20) != 0) {
        MultiByteToWideChar(0,1,(LPCSTR)((int)(void *)param_1 + 0x678),-1,local_618,0x104);
        local_412 = 0;
        if ((~in_stack_00000010 & 1) == 0) {
          FUN_0041d0f0(*(void **)((int)(void *)param_1 + 0x20),local_618);
        }
        else {
          (**(code **)(**(int **)((int)(void *)param_1 + 0x20) + 4))
                    (local_618,param_1._4_4_,param_2);
        }
        (**(code **)(**(int **)((int)(void *)param_1 + 0x20) + 0xc))(0xaaaaaa7);
      }
      uVar9 = param_1._4_4_ + *(int *)((int)(void *)param_1 + 100) * -2;
      uVar4 = *(uint *)((int)(void *)param_1 + 0x890);
      iVar3 = *(int *)((int)(void *)param_1 + 0x894);
      uVar10 = uVar9 + *(int *)((int)(void *)param_1 + 0x60) * -2;
      uVar11 = uVar10 + *(int *)((int)(void *)param_1 + 0x5c) * -2;
      uVar12 = uVar11 - uVar4;
      uVar13 = uVar12 - *(uint *)((int)(void *)param_1 + 0x44);
      local_76c = uVar13 - 0x38;
      iVar6 = 0;
      iVar8 = (((((((param_2 - (param_1._4_4_ < (uint)(*(int *)((int)(void *)param_1 + 100) * 2))) -
                   (uint)(uVar9 < (uint)(*(int *)((int)(void *)param_1 + 0x60) * 2))) -
                  (uint)(uVar10 < (uint)(*(int *)((int)(void *)param_1 + 0x5c) * 2))) - iVar3) -
                (uint)(uVar11 < uVar4)) - *(int *)((int)(void *)param_1 + 0x48)) -
              (uint)(uVar12 < *(uint *)((int)(void *)param_1 + 0x44))) - (uint)(uVar13 < 0x38);
      if ((iVar8 < 1) && (iVar8 < 0)) {
        local_76c = 0;
        iVar8 = 0;
      }
      else {
        iVar6 = FUN_00409fe0(*(HANDLE *)((int)(void *)param_1 + 8),uVar4,iVar3,local_76c,iVar8,
                             *(HANDLE *)((int)(void *)param_1 + 0xc),uVar4,iVar3);
        if (iVar6 < 0) {
          return iVar6;
        }
        if ((*(int **)((int)(void *)param_1 + 0x20) != (int *)0x0) &&
           ((~in_stack_00000010 & 1) != 0)) {
          (**(code **)(**(int **)((int)(void *)param_1 + 0x20) + 0xc))(0xaaaaaaf);
        }
      }
      if ((*(int *)((int)(void *)param_1 + 0x894) < 0) ||
         ((*(int *)((int)(void *)param_1 + 0x894) < 1 &&
          (*(int *)((int)(void *)param_1 + 0x890) == 0)))) {
        puVar5 = (uchar *)((int)(void *)param_1 + 0x678);
      }
      else {
        puVar5 = (uchar *)((int)(void *)param_1 + 0x468);
      }
      _mbscpy(auStack_71c,puVar5);
      iStack_778 = 1;
      iVar3 = iVar8;
      uVar4 = local_76c;
      while( true ) {
        if (((iVar6 < 0) || ((int)uVar1 < iVar3)) || (((int)uVar1 <= iVar3 && (uVar2 <= uVar4))))
        goto LAB_0040ef58;
        _splitpath((char *)auStack_71c,(char *)0x0,(char *)0x0,acStack_30c,acStack_75c);
        _SfGetPathNameFromFilePath_12
                  ((uchar *)((int)(void *)param_1 + 0x678),(uchar *)local_618,0x104);
        iStack_778 = iStack_778 + 1;
        SfPrintF(auStack_410,(BYTE *)"%s%s%d%s");
        hObject = CreateFileA((LPCSTR)auStack_410,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                              (HANDLE)0x0);
        if (hObject == (HANDLE)0xffffffff) break;
        iVar6 = iVar3 + param_2 + (uint)CARRY4(uVar4,param_1._4_4_);
        uVar7 = param_2;
        uVar9 = param_1._4_4_;
        if (((int)uVar1 <= iVar6) && (((int)uVar1 < iVar6 || (uVar2 < uVar4 + param_1._4_4_)))) {
          uVar9 = uVar2 - uVar4;
          uVar7 = (uVar1 - iVar3) - (uint)(uVar2 < uVar4);
        }
        if (*(int *)((int)(void *)param_1 + 0x20) != 0) {
          MultiByteToWideChar(0,1,(LPCSTR)auStack_410,-1,aWStack_208,0x104);
          uStack_2 = 0;
          if ((~in_stack_00000010 & 1) == 0) {
            FUN_0041d0f0(*(void **)((int)(void *)param_1 + 0x20),aWStack_208);
            (**(code **)(**(int **)((int)(void *)param_1 + 0x20) + 0xc))(0xaaaaaa7);
          }
          else {
            (**(code **)(**(int **)((int)(void *)param_1 + 0x20) + 4))(aWStack_208,uVar9,uVar7);
            (**(code **)(**(int **)((int)(void *)param_1 + 0x20) + 0xc))(0xaaaaaa7);
          }
        }
        iVar6 = FUN_00409fe0(*(HANDLE *)((int)(void *)param_1 + 8),
                             *(uint *)((int)(void *)param_1 + 0x890) + uVar4,
                             *(int *)((int)(void *)param_1 + 0x894) + iVar3 +
                             (uint)CARRY4(*(uint *)((int)(void *)param_1 + 0x890),uVar4),uVar9,uVar7
                             ,hObject,0,0);
        if (*(int **)((int)(void *)param_1 + 0x20) != (int *)0x0) {
          (**(code **)(**(int **)((int)(void *)param_1 + 0x20) + 0xc))(0xaaaaaaf);
        }
        bVar14 = CARRY4(uVar4,uVar9);
        uVar4 = uVar4 + uVar9;
        iVar3 = iVar3 + uVar7 + (uint)bVar14;
        CloseHandle(hObject);
      }
      FUN_00410c30((void *)param_1,0xaaaaaaa2,(uchar *)"SplitArchive",(uchar *)0x0);
LAB_0040ef58:
      uVar1 = *(uint *)((int)(void *)param_1 + 0x890);
      iVar6 = FUN_00409fe0(*(HANDLE *)((int)(void *)param_1 + 8),
                           uVar1 + *(uint *)((int)(void *)param_1 + 0x4c),
                           *(int *)((int)(void *)param_1 + 0x894) +
                           *(int *)((int)(void *)param_1 + 0x50) +
                           (uint)CARRY4(uVar1,*(uint *)((int)(void *)param_1 + 0x4c)),
                           *(uint *)((int)(void *)param_1 + 0x44),
                           *(int *)((int)(void *)param_1 + 0x48),
                           *(HANDLE *)((int)(void *)param_1 + 0xc),uVar1 + local_76c,
                           *(int *)((int)(void *)param_1 + 0x894) + iVar8 +
                           (uint)CARRY4(uVar1,local_76c));
      if (-1 < iVar6) {
        *(int *)((int)(void *)param_1 + 0x898) = iStack_778;
        *(uint *)((int)(void *)param_1 + 0x4c) = local_76c;
        *(uint *)((int)(void *)param_1 + 0x18) = *(uint *)((int)(void *)param_1 + 0x44) + local_76c;
        *(int *)((int)(void *)param_1 + 0x50) = iVar8;
        *(uint *)((int)(void *)param_1 + 0x1c) =
             *(int *)((int)(void *)param_1 + 0x48) + iVar8 +
             (uint)CARRY4(*(uint *)((int)(void *)param_1 + 0x44),local_76c);
        puVar5 = (uchar *)_SfGetFileNamePtrA_4((LPCSTR)auStack_71c);
        _mbscpy((uchar *)((int)(void *)param_1 + 0x468),puVar5);
        iVar6 = FUN_0040cdb0((void *)param_1,local_76c,iVar8);
        if (-1 < iVar6) {
          *(undefined4 *)((int)(void *)param_1 + 0x8a8) = 1;
          return iVar6;
        }
      }
    }
  }
  else {
    iVar6 = -0x7fffbffb;
  }
  return iVar6;
}


