/* Module: encn3260.dll
   Function: FUN_66491e60
   Address: 66491e60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66491e60(void *this,undefined2 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)((int)this + 0x9e);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0x5c) == 0)) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0,0,0xffffffff);
  }
  puVar2 = operator_new(7);
  *(char *)puVar2 = (char)((ushort)param_1 >> 8);
  *(char *)((int)puVar2 + 1) = (char)param_1;
  *(char *)((int)puVar2 + 2) = (char)((ushort)param_2 >> 8);
  *(char *)((int)puVar2 + 3) = (char)param_2;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined1 *)((int)puVar2 + 5) = 0;
  *(undefined1 *)((int)puVar2 + 6) = 0;
  puVar3 = operator_new(0xc);
  *puVar3 = 0x40;
  puVar3[1] = 0xff;
  puVar3[2] = 2;
  *(undefined4 *)(puVar3 + 3) = *puVar2;
  *(undefined2 *)(puVar3 + 7) = *(undefined2 *)(puVar2 + 1);
  puVar3[9] = *(undefined1 *)((int)puVar2 + 6);
  uVar4 = FUN_66492030(this,puVar3,(undefined1 *)((int)(puVar3 + 3) + (7 - (int)puVar3)));
  operator_delete(puVar2);
  return uVar4;
}


