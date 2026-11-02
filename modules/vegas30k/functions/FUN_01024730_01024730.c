/* Module: vegas30k.dll
   Function: FUN_01024730
   Address: 01024730
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01024730(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  HRESULT HVar4;
  int unaff_EBX;
  int unaff_EBP;
  int iVar5;
  int unaff_ESI;
  int unaff_EDI;
  undefined1 *puVar6;
  int *local_120;
  undefined1 local_11c [24];
  CHAR local_104 [260];
  
  iVar5 = 0;
  *param_1 = 0;
  local_120 = (int *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_2 = 0;
  iVar1 = FUN_01023b50();
  if (iVar1 != 0) {
    if (DAT_012099dc != (int *)0x0) {
      iVar5 = *DAT_012099dc;
    }
    iVar1 = 0;
    if (0 < iVar5) {
      do {
        piVar2 = (int *)(DAT_012099dc[1] * iVar1 + DAT_012099dc[2]);
        *param_1 = *param_1 + *piVar2;
        param_1[1] = param_1[1] + piVar2[1];
        param_1[2] = param_1[2] + piVar2[2];
        param_1[3] = param_1[3] + piVar2[3];
        GetModuleFileNameA((HMODULE)piVar2[0x49],local_104,0x104);
        iVar3 = _SfDosGetDateTime_4();
        iVar1 = iVar1 + 1;
        *param_2 = *param_2 + iVar3;
      } while (iVar1 < iVar5);
    }
    if (DAT_012099e4 != 0) {
      return;
    }
  }
  HVar4 = CoCreateInstance((IID *)&DAT_011f0e60,(LPUNKNOWN)0x0,7,(IID *)&DAT_011f0e70,&local_120);
  if (-1 < HVar4) {
    puVar6 = local_11c;
    piVar2 = (int *)0x0;
    iVar5 = (**(code **)(*local_120 + 0x14))(local_120,1,param_3,0);
    (**(code **)(*piVar2 + 8))(piVar2);
    if (-1 < iVar5) {
      do {
        (**(code **)(*piVar2 + 0xc))(piVar2,1,&stack0xfffffed0,&stack0xfffffecc);
        if (puVar6 == (undefined1 *)0x0) break;
        *param_1 = *param_1 + unaff_EDI;
        param_1[1] = param_1[1] + unaff_ESI;
        param_1[2] = param_1[2] + unaff_EBP;
        param_1[3] = param_1[3] + unaff_EBX;
        iVar5 = FUN_010242e0(&stack0xfffffed0);
        *param_2 = *param_2 + iVar5;
      } while (puVar6 != (undefined1 *)0x0);
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return;
}


