/* Module: vegas30.exe
   Function: FUN_00530ac0
   Address: 00530ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_00530ac0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  HGLOBAL hMem;
  LPVOID pvVar5;
  int *unaff_ESI;
  undefined *puVar6;
  bool bVar7;
  SIZE_T unaff_retaddr;
  int *piVar8;
  undefined4 *local_8;
  undefined4 local_4;
  
  _DAT_00657390 = DAT_0060f218;
  _DAT_00657398 = DAT_0060f220;
  _DAT_0065739c = DAT_0060f224;
  local_8 = (undefined4 *)0x0;
  _DAT_00657394 = DAT_0060f21c;
  local_4 = 0;
  puVar6 = (undefined *)0x0;
  iVar2 = (**(code **)*DAT_0064b510)(DAT_0064b510,&DAT_0060f078);
  if ((-1 < iVar2) && (unaff_ESI != (int *)0x0)) {
    if (param_1 != 0) {
      (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,1,unaff_retaddr);
    }
    bVar7 = param_3 != 0;
    if (bVar7) {
      (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,0x10);
      puVar6 = &DAT_00657390;
    }
    iVar1 = param_2;
    if (param_2 == 0) {
      iVar2 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,puVar6,bVar7,0x20,2);
    }
    if (-1 < iVar2) {
      (**(code **)(*unaff_ESI + 0x24))(unaff_ESI,0);
      if (iVar1 != 0) {
        uVar3 = _SfGetString_8(DAT_00647204,0x6e43);
        uVar4 = _SfGetString_8(DAT_00647204,0x6e42);
        piVar8 = (int *)0x0;
        (*(code *)local_8[7])(&local_8,uVar3,uVar4,0xfffffffe,0,0,0);
        uVar3 = _SfGetString_8(DAT_00647204,0x6e41);
        uVar4 = _SfGetString_8(DAT_00647204,0x6e40);
        (**(code **)(*piVar8 + 0x1c))(piVar8,uVar3,uVar4,0xffffffff,0,0,0);
      }
      local_8 = (undefined4 *)0x0;
      local_4 = 0;
      iVar2 = (*pcRam00000028)(&local_8,0,&local_8,0,&local_4);
      if (-1 < iVar2) {
        hMem = GlobalAlloc(0x42,unaff_retaddr);
        pvVar5 = GlobalLock(hMem);
        *local_8 = pvVar5;
        if (pvVar5 != (LPVOID)0x0) {
          param_1 = 200;
          (**(code **)(*unaff_ESI + 0x28))(unaff_ESI,pvVar5,&stack0x00000000,local_4,&param_1);
        }
      }
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    return unaff_ESI;
  }
  return (int *)0x0;
}


