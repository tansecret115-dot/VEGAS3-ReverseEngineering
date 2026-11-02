/* Module: 14_43260.dll
   Function: FUN_10004720
   Address: 10004720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_10004720(void *this,int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((((param_1 == 8000) || (param_1 == 0x2b11)) || (param_1 == 0x5622)) || (param_1 == 0xac44)) {
    *(int *)((int)this + 0x12ca) = param_1;
    FUN_10002e50((int)this);
    FUN_100041b0((int)this);
    if (param_1 == 8000) {
      *param_3 = *(undefined4 *)((int)this + 0x98e);
    }
    else if (param_1 == 0x2b11) {
      *param_3 = 0xdc;
    }
    else if (param_1 == 0x5622) {
      *param_3 = 0x1b8;
    }
    else if (param_1 == 0xac44) {
      *param_3 = 0x370;
    }
    *(undefined4 *)((int)this + 0x12ce) = *param_3;
    *param_4 = 0x14;
    pvVar1 = calloc(0x8c,4);
    *(void **)((int)this + 0x12d2) = pvVar1;
    if (pvVar1 != (void *)0x0) {
      *(undefined4 *)((int)this + 0x9c6) = 0;
      *(undefined4 *)((int)this + 0x9ca) = 0;
      *(undefined4 *)((int)this + 0x9ce) = 0;
      *(undefined4 *)((int)this + 0x9d2) = 0;
      *(undefined4 *)((int)this + 0x9d6) = 0;
      iVar3 = *(int *)((int)this + 0x12d2);
      *(int *)((int)this + 0x9ca) = iVar3;
      *(int *)((int)this + 0x9ce) = iVar3 + 0x28;
      *(int *)((int)this + 0x9d2) = iVar3 + 0x50;
      *(undefined4 *)((int)this + 0x9da) = 0;
      *(undefined4 *)((int)this + 0x9de) = 0;
      *(undefined4 *)((int)this + 0x9e2) = 0;
      *(undefined4 *)((int)this + 0x9e6) = 0;
      *(undefined4 *)((int)this + 0x9ea) = 0;
      iVar3 = *(int *)((int)this + 0x9d2);
      *(int *)((int)this + 0x9de) = iVar3 + 0x28;
      *(int *)((int)this + 0x9e2) = iVar3 + 0x50;
      *(int *)((int)this + 0x9e6) = iVar3 + 0x78;
      *(undefined4 *)((int)this + 0x9ee) = 0;
      *(undefined4 *)((int)this + 0x9f2) = 0;
      *(undefined4 *)((int)this + 0x9f6) = 0;
      *(undefined4 *)((int)this + 0x9fa) = 0;
      *(undefined4 *)((int)this + 0x9fe) = 0;
      iVar3 = *(int *)((int)this + 0x9e6);
      *(int *)((int)this + 0x9f2) = iVar3 + 0x28;
      *(int *)((int)this + 0x9f6) = iVar3 + 0x50;
      *(int *)((int)this + 0x9fa) = iVar3 + 0x78;
      *(int *)((int)this + 0x9fe) = iVar3 + 0xa0;
      *(undefined4 *)((int)this + 0xa02) = 0;
      *(undefined4 *)((int)this + 0xa06) = 0;
      *(undefined4 *)((int)this + 0xa0a) = 0;
      *(undefined4 *)((int)this + 0xa0e) = 0;
      *(undefined4 *)((int)this + 0xa12) = 0;
      iVar3 = *(int *)((int)this + 0x9fe);
      *(int *)((int)this + 0xa06) = iVar3 + 0x28;
      *(int *)((int)this + 0xa0a) = iVar3 + 0x50;
      *(int *)((int)this + 0xa0e) = iVar3 + 0x78;
      *(int *)((int)this + 0xa12) = iVar3 + 0xa0;
      puVar2 = malloc(0x800);
      *(undefined4 **)((int)this + 0x12d6) = puVar2;
      for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      puVar2 = malloc(0x1000);
      *(undefined4 **)((int)this + 0x12da) = puVar2;
      for (iVar3 = 0x400; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      puVar2 = malloc(0x2000);
      *(undefined4 **)((int)this + 0x12de) = puVar2;
      for (iVar3 = 0x800; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      puVar2 = malloc(0x2000);
      *(undefined4 **)((int)this + 0x12e2) = puVar2;
      for (iVar3 = 0x800; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      if (((*(int *)((int)this + 0x12d6) != 0) && (*(int *)((int)this + 0x12da) != 0)) &&
         ((*(int *)((int)this + 0x12de) != 0 && (*(int *)((int)this + 0x12e2) != 0)))) {
        return 0;
      }
    }
  }
  return 0xffffffff;
}


