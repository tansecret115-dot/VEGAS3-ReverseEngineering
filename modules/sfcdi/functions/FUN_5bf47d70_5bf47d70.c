/* Module: sfcdi.dll
   Function: FUN_5bf47d70
   Address: 5bf47d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf47d70(int param_1,char *param_2,void *param_3,uint *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *_Dst;
  size_t local_14;
  int local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  puVar1 = (undefined4 *)(param_1 + 0x4c);
  local_4 = 0;
  local_10 = *(int *)(param_1 + 0x50);
  local_8 = 0;
  if (local_10 == 0x1ba) {
    FUN_5bf3cdc0((undefined1 *)&local_10,1);
    memmove(param_3,&local_10,4);
    iVar3 = FUN_5bf3bc40(puVar1,(undefined4 *)((int)param_3 + 4),8,&local_14);
    if (-1 < iVar3) {
      _Dst = (undefined4 *)((int)param_3 + 4 + local_14);
      uVar6 = local_14 + 4;
      while( true ) {
        iVar3 = FUN_5bf3bd40(puVar1);
        if (iVar3 < 0) break;
        local_10 = *(int *)(param_1 + 0x50);
        if (local_10 == 0x1b7) {
          memmove(_Dst,&local_10,4);
          FUN_5bf3cdc0((undefined1 *)_Dst,1);
          _Dst = _Dst + 1;
          uVar6 = uVar6 + 4;
          local_4 = 1;
        }
        else if (local_10 == 0x1b9) {
          memmove(_Dst,&local_10,4);
          FUN_5bf3cdc0((undefined1 *)_Dst,1);
          _Dst = _Dst + 1;
          uVar6 = uVar6 + 4;
          local_8 = 1;
        }
        else {
          if (local_10 == 0x1ba) goto LAB_5bf47ee4;
          memmove(_Dst,&local_10,4);
          FUN_5bf3cdc0((undefined1 *)_Dst,1);
          _Dst = _Dst + 1;
          uVar6 = uVar6 + 4;
          iVar3 = FUN_5bf3bc40(puVar1,&local_c,2,&local_14);
          if (-1 < iVar3) {
            memmove(_Dst,&local_c,local_14);
            _Dst = (undefined4 *)((int)_Dst + local_14);
            uVar6 = uVar6 + local_14;
            FUN_5bf3cd90((undefined1 *)&local_c,1);
            iVar3 = FUN_5bf3bc40(puVar1,_Dst,local_c & 0xffff,&local_14);
            if (-1 < iVar3) {
              _Dst = (undefined4 *)((int)_Dst + local_14);
              uVar6 = uVar6 + local_14;
            }
          }
        }
      }
      iVar3 = 0;
LAB_5bf47ee4:
      if (uVar6 < 0x914) {
        uVar5 = 0x914 - uVar6;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *_Dst = 0;
          _Dst = _Dst + 1;
        }
        uVar6 = 0x914;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)_Dst = 0;
          _Dst = (undefined4 *)((int)_Dst + 1);
        }
      }
      if (param_2 != (char *)0x0) {
        piVar2 = *(int **)(param_1 + 0x1c);
        iVar3 = *(int *)(param_1 + 0x20);
        if (piVar2 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar2;
        }
        if ((iVar3 < 0) || (iVar4 + -1 < iVar3)) {
          iVar3 = 0;
        }
        else {
          iVar3 = piVar2[1] * iVar3 + piVar2[2];
        }
        iVar3 = FUN_5bf47ae0(param_1,iVar3,param_2,local_4,local_8);
      }
      *param_4 = uVar6;
      return iVar3;
    }
  }
  else {
    iVar3 = -0x7fffbffb;
  }
  return iVar3;
}


