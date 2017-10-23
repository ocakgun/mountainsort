#ifndef MV_COMPUTE_TEMPLATES_H
#define MV_COMPUTE_TEMPLATES_H

#include <QString>

bool mv_compute_templates(const QString& timeseries_path, const QString& firings_path, const QString& templates_out_path, const QString& stdevs_out_path, int clip_size);
bool mv_subfirings(QString firings_path, QString firings_out_path, QVector<int> labels, int max_per_label);

#endif // MV_COMPUTE_TEMPLATES_H
