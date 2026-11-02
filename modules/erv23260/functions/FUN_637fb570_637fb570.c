/* Module: erv23260.dll
   Function: FUN_637fb570
   Address: 637fb570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fb570(void *this,int param_1)

{
  int iVar1;
  char cVar2;
  
  FUN_637fd360(this,param_1,1);
  if (param_1 == 1) {
    iVar1 = FUN_637fd250((int)this);
    cVar2 = (char)iVar1;
    FUN_637ff8c0(*(void **)((int)this + 0x94),*(int *)((int)this + 0x88),cVar2);
    FUN_637ff8e0(*(void **)((int)this + 0x94),*(int *)((int)this + 0x88),cVar2);
    FUN_637ff900(*(void **)((int)this + 0x94),*(int *)((int)this + 0x88),cVar2);
  }
  return;
}


