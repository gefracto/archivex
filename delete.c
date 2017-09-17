#include <zip.h>

int delete(char *name, char *zipname)
{
	struct zip *archive;
    int err;
    archive = zip_open(zipname, 1, &err);
    zip_delete(archive, zip_name_locate(archive, name, ZIP_FL_ENC_UTF_8));
    zip_close(archive);
    return err;
}