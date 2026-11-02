/* Module: vidcap30.exe
   Function: FUN_00411670
   Address: 00411670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00411670(LPSTR param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  void *_Memory;
  int *piVar2;
  int *piVar3;
  int *piStack_134;
  WCHAR aWStack_10c [4];
  int local_104 [62];
  int *piStack_c;
  
  piStack_134 = (int *)0x0;
  _Memory = (void *)0x0;
  _SfList_CreateExZ_32(param_1 + 0x84,4,0xffffffff);
  piStack_134 = (int *)0x0;
  _SfList_CreateExZ_32(param_1 + 0x88,4,0xffffffff);
  if ((*(int *)(param_1 + 0x84) == 0) || (*(int *)(param_1 + 0x88) == 0)) {
    iVar1 = -0x7ff8fff2;
  }
  else {
    piStack_134 = local_104;
    *(int **)(param_1 + 0x80) = param_3;
    iVar1 = (**(code **)(*param_3 + 0x30))();
    if (-1 < iVar1) {
      if (piStack_c != (int *)0x0) {
        (**(code **)(*piStack_c + 8))();
        piStack_c = (int *)0x0;
      }
      if ((&stack0x00000000 == (undefined1 *)0x10c) || (aWStack_10c[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_10c,-1,param_1,0x80,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (param_1 != (LPSTR)0x0) {
        *param_1 = '\0';
      }
      param_1[0x7f] = '\0';
      piVar3 = param_3;
      iVar1 = (**(code **)(*param_3 + 0x28))();
      if (-1 < iVar1) {
        piVar2 = unaff_ESI;
        (**(code **)(*unaff_ESI + 0x14))();
        iVar1 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1,&piStack_134,&stack0xfffffed4);
        do {
          if (iVar1 != 0) {
            if (iVar1 == 1) {
              iVar1 = 0;
            }
LAB_0041181e:
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 8))(piVar3);
            }
            if (_Memory != (void *)0x0) {
              free(_Memory);
            }
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 8))(piVar2);
            }
            return iVar1;
          }
          _Memory = calloc(1,0x88);
          if (_Memory == (void *)0x0) {
            iVar1 = -0x7ff8fff2;
            goto LAB_0041181e;
          }
          iVar1 = FUN_00411530(_Memory,piVar2);
          if (-1 < iVar1) {
            (**(code **)(*piVar2 + 0x24))(piVar2,&stack0xfffffed4);
            if (unaff_ESI == (int *)0x0) {
              iVar1 = *piStack_134;
            }
            else {
              iVar1 = *param_3;
            }
            _SfList_InsertList_16(iVar1,0xffffffff,&stack0xfffffed0,1);
            _Memory = (void *)0x0;
          }
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            piVar2 = (int *)0x0;
          }
          iVar1 = (**(code **)(*piVar3 + 0xc))(piVar3,1,&stack0xfffffebc,&stack0xfffffec4);
        } while( true );
      }
    }
  }
  return iVar1;
}


