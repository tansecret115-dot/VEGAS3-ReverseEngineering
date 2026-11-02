/* Module: pngu3266.dll
   Function: Find
   Address: 6061a3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Multiple Matches With Same Base Name
    public: struct __POSITION * __thiscall CObList::Find(class CObject *,struct __POSITION *)const 
    public: struct __POSITION * __thiscall CPtrList::Find(void *,struct __POSITION *)const 
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

undefined4 * __thiscall Find(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)((int)this + 4);
  }
  else {
    puVar1 = (undefined4 *)*param_2;
  }
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}


