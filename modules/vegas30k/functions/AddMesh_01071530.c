/* Module: vegas30k.dll
   Function: AddMesh
   Address: 01071530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CMeshWarp::AddMesh(struct tWARP_MESH *) */

int __thiscall CMeshWarp::AddMesh(CMeshWarp *this,tWARP_MESH *param_1)

{
  undefined4 *puVar1;
  
                    /* 0x71530  15  ?AddMesh@CMeshWarp@@QAEHPAUtWARP_MESH@@@Z */
  puVar1 = *(undefined4 **)(this + 8);
  if ((((puVar1 != (undefined4 *)0x0) && (param_1 != (tWARP_MESH *)0x0)) &&
      (*(int *)(param_1 + 0x8000) == *(int *)this)) &&
     (*(int *)(param_1 + 0x8004) == *(int *)(this + 4))) {
    _SfList_InsertList_16(puVar1,*puVar1,param_1,1);
    return 1;
  }
  return 0;
}


