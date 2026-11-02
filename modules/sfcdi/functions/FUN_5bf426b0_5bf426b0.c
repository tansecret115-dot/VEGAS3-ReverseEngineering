/* Module: sfcdi.dll
   Function: FUN_5bf426b0
   Address: 5bf426b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf426b0(int param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *_Memory;
  
  if (((*(uint *)((int)param_2 + 0x218) & 0x80000000) != 0) &&
     (iVar2 = FUN_5bf42e10(param_1,(int)param_2), _Memory = param_2, iVar2 < 0)) {
LAB_5bf427ce:
    free(_Memory);
    *(undefined4 *)((int)param_2 + 0x34c) = 0;
    return iVar2;
  }
  _Memory = *(undefined4 **)((int)param_2 + 0x34c);
  if (_Memory == (undefined4 *)0x0) {
    _Memory = calloc(1,0x324);
    if (_Memory == (undefined4 *)0x0) {
      iVar2 = -0x7ff8fff2;
      goto LAB_5bf427ce;
    }
    *_Memory = param_2;
    *(undefined4 **)((int)param_2 + 0x34c) = _Memory;
  }
  if (*(int *)((int)param_2 + 0x21c) == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(_Memory + 0xe) = 1;
    *(undefined1 *)((int)_Memory + 0x5e) = 1;
  }
  if ((*(uint *)((int)param_2 + 8) & 0x10) == 0) {
    *(undefined2 *)(_Memory + 1) = 1;
    if (*(int *)((int)param_2 + 0x334) != 0) {
      iVar2 = -0x7ff8ffa9;
      goto LAB_5bf427ce;
    }
    uVar1 = *(uint *)((int)param_2 + 0x330);
    _Memory[3] = uVar1;
    _Memory[5] = (uint)((uVar1 & 0x7ff) != 0) + (uVar1 >> 0xb);
  }
  else {
    FUN_5bf42590(param_1,(int)_Memory);
    if (*(int *)((int)param_2 + 0x21c) == 0) {
      _Memory[4] = 1;
    }
    else {
      _Memory[4] = *(int *)(*(int *)(*(int *)((int)param_2 + 0x21c) + 0x34c) + 0x10) + 1;
    }
    if (*(int *)(param_1 + 4) < (int)_Memory[4]) {
      *(undefined4 *)(param_1 + 4) = _Memory[4];
    }
    FUN_5bf40d40(param_1,(int)param_2);
  }
  *(uint *)((int)param_2 + 0x218) = *(uint *)((int)param_2 + 0x218) | 0x80000000;
  return 0;
}


